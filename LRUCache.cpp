/*
 * LRUCache.cpp
 *
 *  Created on: Jul 19, 2016
 *      Author: Uday Kiran
 */
/**
 * HACKERRANK -> C++ -> CLASSES
 */
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):next(NULL),prev(NULL),value(val),key(k){};
};

class Cache{

   protected:
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
class LRUCache : public Cache{
  public:
    LRUCache(int cap){
        head = NULL;
        tail = NULL;
        cp = cap;
    }
    void moveToBegin(Node* head, Node* tail, Node* n){
        if(head==n)
            return;
            else if(tail==n){
                Node* temp = tail->prev;
                temp->next = NULL;
                tail->prev = NULL;
                tail->next = head;
                head->prev = tail;
                head=tail;
                tail=temp;
            } else {     // if not tail
                Node* temp_prev = n->prev;
                Node* temp_next = n->next;
                n->prev=NULL;
                n->next=head;
                head->prev=n;
                head=n;
                temp_prev->next=temp_next;
                temp_next->prev=temp_prev;
            }
    }
    void set(int key, int value){

        if(mp.count(key)!=0){  //key is already there
            Node* n = mp[key];
        	n->value = value;
            //move it to beginning - head,tail,n
            moveToBegin(head,tail,n);
            return;
        }
        //key not there but there is vacancy
        if(head==NULL){ // assuming cap >= 1


        	Node *n = (Node*)new Node(key,value);
            head=n;
            tail=n;
            mp[key]=n;
            return;
        }

        if(mp.size() < cp){
        Node* n = (Node*)new Node(key,value);
        mp[key]=n;
        n->next = head; //adding at the beginning
        head->prev = n;
        head=n;
        } else {    //key not there and no vacancy
        int lru_key = tail->key;
           mp.erase(lru_key);    // erasing lru key
           Node* n = (Node*)new Node(key,value);
           Node* temp = tail;
            tail=tail->prev;
            tail->next=NULL;
            delete(temp);
            mp[key]=n;
        n->next = head; //adding at the beginning
        head->prev = n;
        head=n;
        }

    }
    int get(int key){

        int ctr = mp.count(key);
        if(ctr==0){  //key isn't there
            return -1;
        } else { //key is there
            int value = mp[key]->value;
            //put the node at the beginning
            moveToBegin(head,tail,mp[key]);
            return value;
        }

    }
};
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      }
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}





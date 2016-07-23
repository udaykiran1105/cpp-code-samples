/*
 * linkedlist_split_even_odd.cpp
 *
 *  Created on: Jul 21, 2016
 *      Author: Uday Kiran
 */
#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};
void insertNode(Node* &head, int data){

	Node* newNode=(Node*)new Node;
	newNode->data=data;
		newNode->next=NULL;
	if(head==NULL){
	head=newNode;
	return;
	//return head;
}
Node* temp=head;
while(temp->next!=NULL){
	temp=temp->next;
}
temp->next=newNode;
	//return head;
	return;
}
void splitEvenOdd(Node* head){
	if(head==NULL)
		return;
	Node* t1=head;
	Node* t2=head->next;
	while(t2->next!=NULL){
		t1->next=t2->next;
		t1=t2;
		t2=t2->next;
	}
	t1->next=NULL;
	t2->next=NULL;
}
void print(Node* heado, Node* heade){
	//printing odd list
	Node* to=heado; Node* te=heade;
	while(to!=NULL){
		cout << to->data << " ";
	    to=to->next;
	}
	cout << endl;
	//printing even list
	while(te!=NULL){
		cout << te->data << " ";
	    te=te->next;
	}
	cout << endl;
}
void print(Node* head){
	while(head!=NULL){
		cout << head->data << " ";
		head=head->next;
	}
	cout << endl;
}
int main(){
	Node* head = NULL;
	insertNode(head,1);
	insertNode(head,2);
	insertNode(head,3);
	insertNode(head,4);
	//print(head);
	insertNode(head,5);
	Node* heade=head->next;
	Node* heado=head;
	splitEvenOdd(head);
	print(heado,heade);
	return 0;
}

/*
 * linkedlist_evenodd.cpp
 *
 *  Created on: May 22, 2016
 *      Author: Uday Kiran
 */
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
Node* head=NULL;
Node* insert(Node* x,int y);
int main(){
	int N,i;
	cout << "Enter #elements" <<endl;
	cin >> N;
	cin.ignore();
	int A[N];
	cout << "enter data" <<endl;
	for(i=0;i<N;i++){
		cin >> A[i];
		head=insert(head,A[i]);
	}

	return 0;
}




/*
 * merge_linkedlist_function.cpp
 *
 *  Created on: Jul 21, 2016
 *      Author: Uday Kiran
 */
/**
 * MAIN NOT INCLUDED HERE.
 */
/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void insert(Node* &main, Node* &join){
    join->next=main->next;
    main->next=join;
}
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    if(headA==NULL)
        return headB;
    if(headB==NULL)
        return headA;

    Node* head = (headA->data > headB->data) ? headB : headA ;
    Node* temp = head;
    Node *tempB,*tempA;
    if(head==headA){
    while(temp->next!=NULL){
        if(headB!=NULL && headB->data<temp->next->data){
            tempB=headB->next;
            insert(temp,headB);
            headB=tempB;
        }
       temp=temp->next;
    }
     if(headB!=NULL){
         temp->next=headB;
     }
    } else {
        while(temp->next!=NULL){
        if(headA!=NULL && headA->data<temp->next->data){
            tempA=headA->next;
            insert(temp,headA);
            headA=tempA;
        }
       temp=temp->next;
    }
     if(headA!=NULL){
         temp->next=headA;
     }

    }

    return head;
}





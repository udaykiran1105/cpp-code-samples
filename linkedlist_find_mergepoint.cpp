/*
 * linkedlist_find_mergepoint.cpp
 *
 *  Created on: Jul 21, 2016
 *      Author: Uday Kiran
 */
/**
 * MAIN function not written.
 */

struct Node
{
    int data;
    Node* next;
};
int findSize(Node* head){
    int ctr = 0;
    while(head!=NULL){
        head=head->next;
        ctr++;
    }
    return ctr;
}
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.
    int sA = findSize(headA);
    int sB = findSize(headB);
    int diff = abs(sA-sB);
    Node* maxhead = (sA > sB) ? headA : headB;
    Node* minhead = (sA > sB) ? headB : headA;

    while(diff>0){
        maxhead=maxhead->next;
        diff--;
    }
    while(maxhead!=minhead){
        maxhead=maxhead->next;
        minhead=minhead->next;
    }
    return maxhead->data;
}





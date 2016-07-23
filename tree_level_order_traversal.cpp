/*
 * tree_level_order_traversal.cpp
 *
 *  Created on: Jul 22, 2016
 *      Author: Uday Kiran
 */
/**
 * MAIN function not shown here
 */
#include <queue>

struct node
{
    int data;
    node* left;
    node* right;
};

void LevelOrder(node * root)
{   queue<node*> q;
    node* temp;
  q.push(root);
 while(!q.empty()){
     temp = q.front();
     cout << temp->data << " ";
     q.pop();
     if(temp->left!=NULL)
     q.push(temp->left);
     if(temp->right!=NULL)
     q.push(temp->right);

 }

}



/*
 * binary_tree_height.cpp
 *
 *  Created on: Jul 21, 2016
 *      Author: Uday Kiran
 */
/**
 * NO MAIN function here. only height calculation shown
 */
//The tree node has data, left child and right child
struct node
{
    int data;
    node* left;
    node* right;
};


int height(node *root)
{
    if(root==NULL)
        return -1;
  return max(height(root->left),height(root->right))+1;
}




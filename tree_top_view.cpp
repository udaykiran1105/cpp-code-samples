/*
 * tree_top_view.cpp
 *
 *  Created on: Jul 21, 2016
 *      Author: Uday Kiran
 */
/**
 * MAIN function not shown here
 */
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};


void left_view(node* root){
   if(root->left==NULL){
        cout << root->data << " ";
        return;
    }
 left_view(root->left);
    cout << root->data << " ";
}
void right_view(node* root){
    while(root->right!=NULL){
        cout << root->data << " ";
        root=root->right;
    }
    cout << root->data << " ";
}
void top_view(node * root)
{

    left_view(root->left);
    cout << root->data << " ";
    right_view(root->right);

}




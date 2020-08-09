#include <bits/stdc++.h>
using namespace std;

class bst{
    public:
    int value=0;
    bst *left = NULL,*right=NULL;
    bst(int n){
        value = n;
    }
    bst* newbst(int n){
        bst* temp = new bst(n); return temp;
    }
    void add(bst* root,int n){
        if(!root->left and root->value>n) {root->left= newbst(n); return;}
        if(!root->right and root->value<n) {root->right= newbst(n); return;}
        if(root->value>n) add(root->left,n);
        if(root->value<n) add(root->right,n);
    }
    void preorder(bst* root){
        if(!root) return;
        cout<<root->value<<" ";
        if(root->left) preorder(root->left);
        if(root->right) preorder(root->right);
    }
    void inorder(bst* root){
        if(!root) return;
        if(root->left) inorder(root->left);
        cout<<root->value<<" ";
        if(root->right) inorder(root->right);
    }
    void postorder(bst* root){
        if(!root) return;
        if(root->left) postorder(root->left);
        if(root->right) postorder(root->right);
        cout<<root->value<<" ";
    }
};


int main()
{
    bst *root = new bst(10);
    bst *temp = new bst(0);
    temp->add(root,5);
    temp->add(root,2);
    temp->add(root,1);
    temp->add(root,22);
    temp->add(root,15);
    // temp->add(root,20);
    temp->preorder(root); cout<<endl;   
    temp->inorder(root); cout<<endl;
    temp->postorder(root); cout<<endl;
}
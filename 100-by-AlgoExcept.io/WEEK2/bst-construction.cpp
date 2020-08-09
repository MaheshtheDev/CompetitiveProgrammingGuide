#include <bits/stdc++.h>
using namespace std;

class bst{
    public:
    int value;
    bst *left=NULL,*right=NULL;
    bst(int n){
        value = n;
    }
    bst* add(int n){
        bst* temp = new bst(n);
        return temp;
    }
    void add_bst(bst* root,int n){
        while(root){
            if(root->value>n){
                if(root->left) root=root->left;
                else {root->left = add(n); return;}
            }
            else if(root->value<n){
                if(root->right) root=root->right;
                else {root->right = add(n); return;}
            }
            else root=root->left;
        }
    }
    void inorder(bst* root){
        if(!root) return;
        if(root->left) inorder(root->left);
        cout<<root->value<<" ";
        if(root->right) inorder(root->right);
    }
    bool search_bst(bst* root,int n){
        while(root){
            if(root->value>n) root = root->left;
            else if(root->value<n) root = root->right;
            else return true;
        }
        return false;
    }
    bst* small_rgt(bst* root){
        if(root->left==NULL){ 
            int n = root->value;
            if(root->right!=NULL){
                small_rgt(root->right);
            }
            return root;
        }
        else return small_rgt(root->left);
    }
    bst* del_bst(bst* root,int n){
        if(!root) return root;
        else if(root->value<n) root->right = del_bst(root->right,n);
        else if(root->value>n) root->left = del_bst(root->left,n);
        else{
            if(!root->left and !root->right){
                delete root;
                root = NULL;
            }
            else if(!root->left){
                bst* temp = root;
                root = root->right;
                delete temp;
            }
            else if(!root->right){
                bst* temp = root;
                root = root->left;
                delete temp;
            }
            else{
                bst* temp = small_rgt(root->right);
                root->value = temp->value;
                root->right = del_bst(root->right,root->value);
            }
        }
        return root;
    }
};

int main()
{
    bst *root = new bst(10);
    bst *temp = new bst(0);
    temp->add_bst(root,5);
    temp->add_bst(root,6);
    temp->add_bst(root,11);
    temp->add_bst(root,14);
    temp->add_bst(root,19);
    temp->add_bst(root,20);
    temp->inorder(root); cout<<endl;
    temp->del_bst(root,10);
    temp->inorder(root); cout<<endl;
    temp->search_bst(root,10) ? cout<<"Found it":cout<<"Oops! Not Found";
}

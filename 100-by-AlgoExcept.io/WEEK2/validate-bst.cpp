#include <bits/stdc++.h>
using namespace std;

class bst{
    public:
    int val=0;
    bst *left = NULL,*right=NULL;
    bst(int n){
        val = n;
    }
    bst* newbst(int n){
        bst* temp = new bst(n); return temp;
    }
    void add(bst* root,int n){
        if(!root->left and root->val>n) {root->left= newbst(n); return;}
        if(!root->right and root->val<n) {root->right= newbst(n); return;}
        if(root->val>n) add(root->left,n);
        if(root->val<n) add(root->right,n);
    }
    // bool val_bst(bst* root,int min=INT_MIN,int max=INT_MAX){
    //     if(!root) return true;
    //     else if(min<=root->value and root->value<max){
    //         return val_bst(root->left,INT_MIN,root->value) and val_bst(root->right,root->value,INT_MAX);
    //     }
    //     else{
    //         return false;
    //     }
    // }
     bool isValidBST(bst* root){
       return val_bst(root,NULL,NULL);
    }
    bool val_bst(bst* root,bst* lft,bst* rgt){
        if(!root) return true;
        if(lft and lft->val>=root->val) return false;
        if(rgt and rgt->val<=root->val) return false;
        return val_bst(root->left,lft,root) and val_bst(root->right,root,rgt);
    }
};


int main()
{
    bst *root = new bst(10);
    bst *temp = new bst(0);
    root->left = new bst(9);
    temp->add(root,5);
    temp->add(root,2);
    temp->add(root,1);
    temp->add(root,22);
    temp->add(root,15);
    if(temp->val_bst(root,NULL,NULL)) cout<<"Bst is Valid";
    else cout<<"Bst is not Valid";
}
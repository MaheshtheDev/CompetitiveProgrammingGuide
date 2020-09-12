#include <bits/stdc++.h>
using namespace std;

// O(N), O(log(N))
class bst{
    public:
    int val=0;
    bst* left = NULL,*right=NULL;
    bst(int n) { val=n;}
    void insert(bst* root,int n){
        if(root->val>n) { root->left = new bst(n); root = root->left;}
        else { root->right = new bst(n); root=root->right;}
    }
    void inorder(bst* root){
        if(!root) return;
        if(root->left) inorder(root->left);
        cout<<root->val<<" ";
        if(root->right) inorder(root->right);
    }
};

bst* min_height_bst(bst* root,vector<int> a,int low,int high){
    if(low>high) return NULL;
    int idx = (low+high)/2;
    root = new bst(a[idx]);
    if(low<=high) root->left = min_height_bst(root,a,low,(low+high)/2-1);
    if(low<=high) root->right = min_height_bst(root,a,(low+high)/2+1,high);
    return root;
}

void invert_bst(bst* root){
    if(!root) return;
    invert_bst(root->left);
    invert_bst(root->right);
    swap(root->right,root->left); 
}
int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    int low = 0,high=9;
    bst* root = NULL;
    root = min_height_bst(root,a,low,high);
    root->inorder(root); cout<<endl;
    invert_bst(root);
    root->inorder(root);
}
#include <bits/stdc++.h>
using namespace std;
class tree{
    public:
        int value = 0;
        tree* left=NULL;
        tree* right=NULL;
        tree(int n){
            value = n;
        }
};

void branchsum(tree* root,int sum, vector<int> &sums){
    sum += root->value;
    if(root->left==NULL and root->right==NULL) {  sums.push_back(sum); return;}
    if(root->left) branchsum(root->left,sum,sums);
    if(root->right) branchsum(root->right,sum,sums);
}

int main()
{
    vector<int> sums;
    tree* root = new tree(1);
    root->left = new tree(2);
    root->left->left = new tree(4);
    root->left->right = new tree(5);
    root->left->right->left = new tree(10);
    root->left->left->left = new tree(8);
    root->left->left->right = new tree(9);
    root->right = new tree(3);
    root->right->left = new tree(6);
    root->right->right = new tree(7);
    branchsum(root,0,sums);
    for(auto i: sums)
    cout<<i<<" ";
}
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

int nodedepths(tree* root, int depth = 0){
    if(root == NULL) 
        return 0;
    int sum = depth + nodedepths(root->left,depth+1) + nodedepths(root->right,depth+1);
    return sum;
}

int main()
{
    int sum=0,depth = 0;
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
    cout<<nodedepths(root,0);
}
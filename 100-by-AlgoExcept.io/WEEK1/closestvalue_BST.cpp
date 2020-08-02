#include <bits/stdc++.h>
using namespace std;
class bst{
    public:
        int val=0;
        bst *left = NULL,*right=NULL;
        bst(){}
        bst(int n){
            val = n;
        }
        bst* Insert(bst* node, int val){
            if(node == NULL) return new bst(val);
            if(val > node->val) { node->right = Insert(node->right, val); }
            else  {node->left = Insert(node->left, val);}
            return node;
        }
        void inorder(bst* root){
            if(!root) return;
            inorder(root->left);
            cout<<root->val<<endl;
            inorder(root->right);
        }
};

int findClosestValueInBstHelper(bst *tree, int target, int closest){
    bst *currentNode = tree;
    while (currentNode != NULL) {
        if (abs(target - closest) > abs(target - currentNode->val)) {
        closest = currentNode->val;
        }
        if (target < currentNode->val) {
        currentNode = currentNode->left;
        }
        else if(target > currentNode->val) currentNode = currentNode->right;
    }
    return closest;
}

int main()
{
  bst b, *root = NULL;
  root = b.Insert(root, 50); 
    b.Insert(root, 30); 
    b.Insert(root, 20); 
    b.Insert(root, 40); 
    b.Insert(root, 70); 
    b.Insert(root, 60); 
    b.Insert(root, 80); 
    // b.inorder(root); 
    cout<<findClosestValueInBstHelper(root,59,INT_MAX);
    return 0; 
}

#include <bits/stdc++.h>
using namespace std;

//  complexity : O(v+e) space : O(v)
class Node{
    public:
    string name;
    vector<Node *> children;
    Node(string n){
        name = n;
    }

    void depthfirstsearch(){
        cout<<this->name<<" ";
        for(int i=0;i<this->children.size();i++) children[i]->depthfirstsearch();
    } 
    Node *addNode(string name){
        Node* newNode = new Node(name);
        children.push_back(newNode); 
        return newNode;
    }
};

int main()
{
    Node* root = new Node("A");
    Node* r2 = root->addNode("B");
    root->addNode("D");
    root->addNode("E");
    r2->addNode("C");
    // vector<string> *temp;
    root->depthfirstsearch();
}
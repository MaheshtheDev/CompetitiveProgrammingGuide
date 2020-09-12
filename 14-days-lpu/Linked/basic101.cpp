#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int val=0;
    node* nxt = NULL;
    node(int x){ this->val = x; nxt = NULL;}
};
node* create_a_ll(){
    node* head = NULL,*last = NULL;
    while(1){
        int x;
        cin>>x;
        if(x==-1) return head;

        if(last==NULL){  
            node* cur = new node(x);
            head = cur;
            last = cur;
        }
        else{ 
            node* cur = new node(x);
            last->nxt = cur;
            last = cur;
        }
    }
    return head;
}

void print_ll(node* root){
    node* cur = root;
    while(cur!=NULL){
        cout<<cur->val<<" ";
        cur = cur->nxt;
    }
}

int find_length(node* head){
    node* cur = head;
    int len=0;
    while(cur!=NULL){
        len++;
        cur=cur->nxt;
    }
    return len;
}

// one way swap the values in the node
node* reverse_ll(node* head){
    node* curr = head;
    node* prev = NULL;
    while(curr!=NULL){
        node* ahead = curr->nxt;
        curr->nxt = prev;
        prev = curr;
        curr = ahead;
    }
    return prev;
}
node* reverse_ll_recursive(node* head, node* prev){
    // if(head->nxt==NULL) return head;
    // node* temp = head->nxt;

    // reverse_ll_recursive(head->nxt);
    // return ;
    node* ahead = head->nxt;
    head->nxt=prev;
    if(ahead==NULL){  return head;}
    return reverse_ll_recursive(ahead, head);
}

node* insert_at_tail(node* head,int x){
    node* cur = head;
    while(cur->nxt!=NULL){
        cur = cur->nxt;
    }
    node* temp = new node(x);
    cur->nxt = temp;
    return head;
}

node* del_kth_pos(node* head, int pos){
    node* temp = head;
    if(pos==1) return head->nxt;
    while(pos-->2){ head=head->nxt; }
    if(head->nxt->nxt) head->nxt = head->nxt->nxt;
    else head->nxt=NULL;
    return temp;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    node* head = create_a_ll();
    print_ll(head);   cout<<endl;
    head = reverse_ll_recursive(head,NULL);
    print_ll(head);   cout<<endl;
    head = del_kth_pos(head,4);
    print_ll(head);
}
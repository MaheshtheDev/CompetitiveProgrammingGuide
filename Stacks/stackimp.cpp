#include <iostream>
using namespace std;
int top = 5,pretop=-1;
void push(int stack[]){
    if(top==pretop-1)
        cout<<"Oops! Stack is Full\n";
    else 
    {
        int temp;
        pretop++;
        cout<<"Enter the Number"; cin>>temp;
        stack[pretop] = temp;
    }

}

void pop(int stack[]){
    if(pretop==-1) cout<<"Sorry! Stack is empty!\n";
    else{
        cout<<stack[pretop]<<" is deleted\n";
        pretop--;
    }
} 

void peek(int stack[]){
    if(pretop==-1) cout<<"Stack is Empty!\n";
    else
    {
        cout<<stack[pretop]<<" is the top element\n";
    }
}

int main()
{
    int stack[5],opt;
    while(1){
        cout<<"\nEnter option(1-push/2-pop/3-peek/4-exit): "; cin>>opt;
        switch(opt){
            case 1:
                push(stack);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                peek(stack);
                break;
            default:
                exit(0);
        }
    }
    return 0;
}
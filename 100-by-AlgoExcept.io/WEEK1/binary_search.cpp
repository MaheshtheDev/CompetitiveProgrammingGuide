#include <bits/stdc++.h>
using namespace std;
// O(log(n)) && space O(1)
int main()
{
    vector<int> a = {1,2,3,4,5,6,7};
    int i,j,n,ft=0,md,lt=a.size()-1,flag=0;
    cin>>n;
    while(flag==0 and (ft<=lt)){
        md = (lt+ft)/2;
        if(n>a[md]){
            ft = md+1;
        }
        else if(n<a[md]){
            lt = md-1; 
        }
        else if(n==a[md]){
            flag=1;
        } 
    }
    if(flag) cout<<a[md];
    else cout<<"Oops not found";
}
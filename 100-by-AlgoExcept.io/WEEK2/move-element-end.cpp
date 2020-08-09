#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {2,1,3,3,2,1,2,4},flag=0,x=2,ln;
    int n = sizeof(a)/sizeof(a[0]);
    ln = n-1;
    // Naive Sol
    // cin>>x;
    // sort(a,a+n);
    // for(int i=0;i<n;i++){
    //     if(a[i]==x and ln>=i) { swap(a[i],a[ln]); ln--;}
    // }
    // for(int i=0;i<n;i++) cout<<a[i]<<" ";

    // Optimized
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]!=a[j] and a[i]==x) {swap(a[i],a[j]);i++;j--;}
        else if(a[i]==x and a[i]==a[j]) j--;
        else i++; 
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
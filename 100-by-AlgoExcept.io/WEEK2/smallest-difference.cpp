#include <bits/stdc++.h>
using namespace std;
// Complexity O(nlogn + mlogm) || O(1)
int main()
{
    int a[6]={-1,5,10,20,28,3},b[5]={26,134,135,15,17},flag=1;
    while(flag){
        flag =0;
        for(int i=1;i<6;i++){
            if(a[i]<a[i-1]) { swap(a[i],a[i-1]); flag=1;}
        }
    }
    flag=1;
    while(flag){
        flag =0;
        for(int i=1;i<5;i++){
            if(b[i]<b[i-1]) { swap(b[i],b[i-1]); flag=1;}
        }
    }
   
    int diff=INT_MAX,ai=0,bi=0,si=0,sj=0;
    while(ai<6 and bi<5){
        int curr=INT_MAX,x=a[ai],y=b[bi];
        if(a[ai]<b[bi]) { curr = a[ai]-b[bi]; ai++;}
        else if(b[bi]<a[ai]) {curr = b[bi] - a[ai]; bi++;}
        if(diff>abs(curr)){
            diff = abs(curr); si=x; sj=y;
        }
    }
    cout<<si<<" "<<sj;
}
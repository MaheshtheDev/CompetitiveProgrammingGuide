#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n; cin>>n;
    int A[n];
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<n-1;i++){
        if(A[i]!=A[i+1]){
          cout<<A[i]<<" ";
        }
        if((i+1)==(n-1)) cout<<A[i+1];
    }
}
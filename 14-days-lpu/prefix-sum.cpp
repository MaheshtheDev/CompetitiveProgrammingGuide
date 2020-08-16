#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int pref[n];
    pref[0] = arr[0];
    for(int i=1;i<n;i++){
        pref[i] = pref[i-1]+arr[i];
    }

    int queries;
    cin>>queries;
    while(queries--){
        int l,r;
        cin>>l>>r;
        int sum = pref[r]-(l>0?pref[l-1]:0);
        cout<<sum<<"\n";
    }
    
}
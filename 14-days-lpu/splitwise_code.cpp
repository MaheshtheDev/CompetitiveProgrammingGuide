#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int f,t;
    cin>>f>>t;
    int net[f];
    for (size_t i = 0; i < f; i++)
    {
        int x,y,amt;
        cin>>x>>y>>amt;
        net[x]-=amt;
        net[y]+=amt;
    }

    multiset<int> s;
    for (size_t i = 0; i < f; i++)
    {
        s.insert(net[i]);
    }
    
    int cnt=0,transfer=0;
    while(!s.empty()){
        int low = *(s.begin());
        int high = *(prev(s.end()));

        s.erase(low);
        s.erase(high);

        int settle = min(-low,high);
        low += settle;
        high -= settle;

        if(low) s.insert(low);
        if(high) s.insert(high);
    
        cnt+=1;
        transfer += settle;
    }
    cout<<cnt<<" "<<transfer;
}
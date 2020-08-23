#include <bits/stdc++.h>
using namespace std;
pair<int,int> p[4];
void sumsame(int curr,int val){
    if(val==5) { 
        // for(auto x: ans) cout<<x<<" ";
        // cout<<endl;
        // for(int i=0;i<4;i++){
        // cout<<p[i].first<<" "<<p[i].second<<endl;
        cout<<"found "<<curr<<" "<<val<<endl;
    }
    if(curr>4) return;
    // if(i<4) { ans.push_back(p[i].first); sumsame(curr+p[i].first,val,ans,i+1); }
    // if(i<4) { ans.push_back(p[i].second); sumsame(curr+p[i].second,val,ans,i+1);}
    int a = p[curr].first,b=p[curr].second;
    cout<<p[curr].first<<" "<<p[curr].second<<endl;
    sumsame(curr+1,val+a);
    sumsame(curr+1,val+b);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    // pair<int,int> s[4];
    for(int i=0;i<4;i++){
        cin>>p[i].first>>p[i].second;
    }
    
    vector<int> ans;
    sumsame(0,0);
}
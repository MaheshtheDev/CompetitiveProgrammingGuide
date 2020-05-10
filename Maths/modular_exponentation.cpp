#include <bits/stdc++.h>
using namespace std;
int mod_exp(int x,int y,int p){
    int res=1;
    x = x%p;
    if(x==0) return 0;
    while(y>0){
        if(y&1){
            res = (res*x)%p;
        }
        y = y>>1;
        x = (x*x)%p;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x,y,p;
    cin>>x>>y>>p;
    cout<<mod_exp(x,y,p);
}
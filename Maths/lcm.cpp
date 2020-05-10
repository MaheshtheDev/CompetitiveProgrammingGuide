#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b){
    if(a==0) return b;
    return gcd(b%a,a);
}

ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a,b; 
    cin>>a>>b;
    cout<<lcm(a,b);
    // s1 = to_string(a); s2= to_string(b);
    // stringstream g1(s1),g2(s2);
    // ll a1,b1;
    // g1>>a1;g2>>b1;
    // cout<<a1+b1;
}
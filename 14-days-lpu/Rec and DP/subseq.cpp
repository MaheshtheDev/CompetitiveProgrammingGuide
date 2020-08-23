#include <bits/stdc++.h>
using namespace std;

void gen_subsequences(string s,string ans){
    if(!s.empty()){
        cout<<ans<<endl;
    }
    // with
    gen_subsequences(s.substr(1),ans+s[0]);
    // without 
    gen_subsequences(s.substr(1),ans);

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    string s ="";
    gen_subsequences("abcd",s);   
}
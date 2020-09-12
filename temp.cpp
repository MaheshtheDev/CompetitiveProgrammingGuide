#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,y=30;
    string s;
    cin>>s;
    cin>>y;
    for(int i=s.size()-1;i>=0;i--){
        if(y<s[i]){
            // cout<<"Hello"<<endl;
            cout<<(s.size()-(s.size()-i+1));
            return 0;
        }
    }
    // cout<<"Hello";
    return 0;
    // for(int i=0;i<s.length();i++){
    //     if((s[i]-k)<65){
    //         cout<<s[i]-k<<" ";
    //         s[i]='Z'-(64-(s[i]-k)); 
    //         cout<<int(s[i])<<endl;
    //         continue;
    //     }
    //     s[i]=s[i]-k;
    // }
    // cout<<s;
}
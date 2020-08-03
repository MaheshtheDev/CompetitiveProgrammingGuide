#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int n;
    cin>>name;
    cin>>n;
    for(int i=0;i<name.length();i++){
        if ((name[i] + n)<=122) cout<<char(name[i] + n); 
        else cout<<((name[i] + n)%122);
    }
}
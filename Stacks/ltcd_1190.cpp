#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
    stack<int> st;
        string s="(abcd)";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')'){
                int x = st.top();
                cout<<s[i]<<" "<<i<<" "<<x<<endl;
                st.pop();
                s.erase(s.begin()+x);
                cout<<"1 "<<s<<endl;
                s.erase(s.begin()+i-1);
                cout<<"2 "<<s<<endl;
                reverse(s.begin()+x,s.begin()+i-1);
            }
        }
    cout<<s;
}
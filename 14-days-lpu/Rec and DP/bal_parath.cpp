#include <bits/stdc++.h>
using namespace std;
// possible bal_par combinations
void bal_par(int curr, int n, string ans, int open, int close)
{
    if (curr == n)
        cout << ans <<endl;

    if (open < n / 2)
        bal_par(curr + 1, n, ans + "(", open + 1, close);

    if (open > close)
        bal_par(curr + 1, n, ans + ")", open, close + 1);
}

string s;
string words[10] = {" ",".,!","abc","def","ghi","jki","mno","pqrs","tuv","wxyz"};

void nokia(int curr,string ans){
    if(curr == s.size()){
        cout<<ans<<endl; return;
    }

    for(auto x: words[s[curr]-'0']){
        nokia(curr+1,ans+x);
    }
    return;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n = 6;
    bal_par(1, n, "(", 1, 0);

    // cin>>s;
    // nokia(0,"");
}
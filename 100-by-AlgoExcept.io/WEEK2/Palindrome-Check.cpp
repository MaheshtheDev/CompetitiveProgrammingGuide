#include <bits/stdc++.h>
using namespace std;
// O(N*N) and O(N)
bool check_palindrome01(string pd){
    string checking = "";
    for(int i=pd.length()-1;i>=0;i--){
        checking +=pd[i];
    }
    return checking == pd;
}
// O(N) and O(N)
bool check_palindrome02(string pd){
    vector<char> checking,orginial;
    for(int i=pd.length()-1;i>=0;i--){
        orginial.push_back(pd[pd.length()-i-1]);
        checking.push_back(pd[i]);
    }
    return orginial == checking;
}
// O(N) and O(N)
bool check_palindrome03(string pd,int i){
    if(i>pd.length()/2) return 1;
    int j = pd.length() - i - 1;
    return pd[i]==pd[j] and check_palindrome03(pd,i+1);
}
// O(N) and O(1)
bool check_palindrome04(string pd){
    int first_idx = 0, last_idx = pd.length()-1;
    while(first_idx<=last_idx){
        if(pd[first_idx]!=pd[last_idx]) return false;
        first_idx++; last_idx--;
    }
    return true;
}

int main()
{
    string pd = "abdccdba";
    cout<<check_palindrome01(pd)<<endl;
    cout<<check_palindrome02(pd)<<endl;
    cout<<check_palindrome03(pd,0)<<endl;
    cout<<check_palindrome04(pd)<<endl;
    return 0;   
}
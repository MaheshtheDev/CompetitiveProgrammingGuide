#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    double ans=0;
    cin>>N;
    if(N<0) return 0; if(N<=1) return 1;
    for(int i=2;i<=N;i++){
        ans+=log10(i);
    }
    cout<<(floor(ans) + 1);
    
    // How to store large number more than 10**6 
    // int temp=0,N=5,carry=0,ans=1;
    // vector<int> a(2);
    // a[1]=1;
    // for (int i=1;i<=N;i++){
    //     carry=0;
    //     for(int j=1;j<=ans;j++){
    //         temp = ((a[j]*i)+carry);
    //         a[j] = temp%10;
    //         carry = temp/10;
    //     }
    //     while (carry!=0){
    //         a.push_back(carry%10); carry/=10;
    //         ans++;
    //     }
    // }
    // for(int i=ans;i>=1;i--) cout<<a[i];
    // cout<<" "<<ans;
}
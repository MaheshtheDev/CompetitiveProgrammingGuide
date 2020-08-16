// sub sequences 2^n
// Sub arrays - n(n+1)/2
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,pos;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int prev_best_ending = 0, cur_best_ending = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (prev_best_ending < 0)
            prev_best_ending = 0;
        cur_best_ending = prev_best_ending + a[i];
        if(cur_best_ending>ans){
            ans = cur_best_ending;
            pos=i;
        }
        prev_best_ending = cur_best_ending;
    }
    cout << ans;

    int sum=0;
    for(int i=pos;i>=0;i--){
        sum += a[i];
        if(sum==ans){
            cout<<" \nSubArray from "<<i<<" "<<pos;
        }   
    }
}
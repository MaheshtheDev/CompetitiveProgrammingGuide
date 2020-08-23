#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    // int n, k;
    // cin>>n; int a[n];
    // for(int i=0;i<n;i++) cin>>a[i];
    // cout<<pow(2,n-1);

    // cin>>n>>k;
    // if(n>>k & 1) cout<<"Set";
    // else cout<<"Not Set";
    
    // converting to Binary Number
    // bitset<10> bt(n);
    // cout<<bt;

    // (1<<k) = pow(2,k)
    // cout<< __builtin_popcountll(7); // no of in long long 1's in binary form of n
    // cout<< __builtin_popcount(7); // no of 1's in binary form of n

    // long long int n = 2ll;
    // cout<< __builtin_popcountll(2);

//  get the last set bit(1)
    // int n = 5, last_set_bit;
    // last_set_bit = ((n & n-1) xor n); // xor is ^

//  count no of set bits
    // int count =0 ;
    // while(n){
    //     count++;
    //     n &= (n-1);
    // }

    // bitset<10> bt(7), bt1(7);
    // cout<<bt.count();
    // bt = bt | (bt1<<3) or bt ^ (bt1<<3)

    // bitset<10> bt(10);
    // n&(n-1) == 0?cout<<"Even":cout<<"Not Even";

    // int n;
    // int a[n], tot_xor = 0, ans=0;
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    //     tot_xor ^=a[i];
    // }
    // int max1=0;
    // for(int i=0;i<n;i++){
    //     max1 = max(max1, tot_xor^a[i]);
    // }

    // n+1 without using +
//     cin>>n;
//     cout<< -~n;

    // for(int i=65;i<65+26;i++){
    //     bitset<8> btC(i),bts(i+32);
    //     cout<<btC<<" "<<bts<<"\n";
    // }

    // converting lower case to uppercase of to lower case
    // char ch = 'a';
    // ch^=' ';
    // cout<<ch;

}
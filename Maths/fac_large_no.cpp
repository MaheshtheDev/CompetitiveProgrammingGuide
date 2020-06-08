// #include <bits/stdc++.h>
// #define MA 500
// using namespace std;
// int multipy(int ,int[] ,int);

// void fac(int n){
//     int res[MA];
//     res[0] = 1;
//     int res_size = 1;
//     for (int i=2;i<=n;i++){
//         res_size = multipy(i,res,res_size);
//     }

//     for(int i=res_size-1;i>=0;i--){
//         cout<<res[i];
//     }
// }

// int multipy(int x,int res[],int res_size){
//     int carry = 0;
//     for(int i=0;i<res_size;i++){
//         int prod = res[i] * x + carry;
//         res[i] = prod%10;
//         carry = prod/10;
//     }
//     while(carry){
//         res[res_size] = carry%10;
//         carry = carry/10;
//         res_size++;
//     }
//     return res_size;
// }
// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     // int n;
//     // cin >> n;
//     fac(5);
//     return 0;
// }


#include<iostream>
#define MA 500
using namespace std;
// int multipy(int ,int[] ,int );
// void fac(int n){
// }

int multipy(int x,int res[],int res_size){
    int carry=0;
    for(int i=0;i<res_size;i++){
        int prod = res[i]*x + carry;
        carry=prod/10; res[i]=prod%10;
    }
    while(carry){
        res[res_size] = carry%10;
        carry/=10;
        res_size++;
    }
    return res_size;
}

int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--){
        cin>>n;
        int res[MA];
        res[0] = 1;
        int res_size = 1;
        for(int x=2;x<=n;x++){
            res_size = multipy(x,res,res_size);
        }
        for(int i=res_size-1;i>=0;i--){
            //  cout<<"Hi";
            cout<<res[i];
        }
    }
	return 0;
}                                    
#include <bits/stdc++.h>
using namespace std;

// Fermat's Little Theorem
long long int prime = 5;
long long int exp(long long int a,long long int b){
    long long int res=0;

    while(b){
        if(b&1) res*=a; res%=prime;
        a*=a;
        a%=prime;
        b/=2;
    }
    return res;
}
long long int inv(int a){
    return exp(a,prime-2);
}

void cal_fact(){
    // TODO check from Github Repo
}

// nCr % prime
long long int NCR(int n,int r){
    long long int n_fact = fact[n];
    long long int r_fact = fact[r];
    long long int n_r_fact = fact[n-r];

    long long int res = n_fact;
    res *= inv(r_fact); res %= prime;
    res *= inv(n_r_fact); res %= prime;
    return res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    cout<<exp(2,8);   
}
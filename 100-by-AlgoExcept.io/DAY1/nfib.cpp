#include <bits/stdc++.h>
using namespace std;
int sol1(int n)
{
    int a[n+1];
    a[0] = 0; a[1] = 1;
    for(int i=2; i<=n; i++){
        a[i] = a[i-1] + a[i-2];
    }
    return a[n];
}

int sol2(int n)
{
    if (n == 0) return 0;
    else if(n==1) return 1;
    else
    return sol2(n-1) + sol2(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<sol1(n)<<endl;
    cout<<sol2(n);
} 
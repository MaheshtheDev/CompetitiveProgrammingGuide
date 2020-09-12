#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {7,10,11,6,9,14};
    int n=sizeof(a)/sizeof(a[0]);
    int subsum[n];
    subsum[0]=a[0]; subsum[1] = a[1];
    for(int i=2;i<n;i++){
        subsum[i] = max(a[i]+subsum[i-2],subsum[i-1]);
    }
    cout<<subsum[n-1];
}
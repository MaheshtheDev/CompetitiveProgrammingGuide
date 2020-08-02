#include <bits/stdc++.h>
using namespace std;
// o(n) || Space o(1) 
int main()
{
    int a[5] = {3,2,4,1,5}, seq[3] = {5,1,5};
    int ari=0,seqi=0;
    while(ari<5 and seqi<3){
        if(a[ari]==seq[seqi]) seqi++;
        ari++;
    }
    if(seqi==3) cout<<"True";
}
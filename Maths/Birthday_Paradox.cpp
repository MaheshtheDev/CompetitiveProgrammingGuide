#include <bits/stdc++.h>
using namespace std;

int B_para(double p){
    return ceil(sqrt(2*365*log(1/(1-p))));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << B_para(0.7);
}
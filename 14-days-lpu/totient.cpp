#include <bits/stdc++.h>
using namespace std;
const int N = 100;
void seive()
{
    vector<bool> p(N, 1);
    vector<int> tot(N);
    // p[0] = p[1] = 0;
    for (size_t i = 0; i < N; i++)
    {
        tot[i] = i;
    }
    
    for (int i = 2; i < N; i++)
    {
        if (p[i]>0)
            continue;
        for (size_t j = i; j < N; j += i){
            p[j]=p[j]+1;
            tot[j] *= (i-1);
            tot[j]/=i;
        }
    }
    for (size_t i = 2; i < N; i++)
    {
        cout<<i<<" "<<tot[i]<<endl;
    }
    
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    vector<int> a(10);
    seive();
}
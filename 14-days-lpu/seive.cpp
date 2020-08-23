#include <bits/stdc++.h>
using namespace std;

const int N = 499979;
vector<int> primes;
void seive()
{
    vector<bool> p(N, 1);
    p[0] = p[1] = 0;
    for (int i = 2; i < N; i++)
    {
        if (p[i] == 0)
            continue;
        if (p[i] == 1)
            primes.push_back(i);
        for (size_t j = i * i; j < N; j += i)
            p[j] = 0;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    seive();

    // for (size_t i = 0; i < N; i++)
    //     cout<<primes[i]<<endl;

    // int n = 499979;
    // if(binary_search(primes.begin(),primes.end(),n)) cout<<"Yeah its Prime Number";
    // else cout<<"Oops..!";
    // using p[n];

    if (N <= 1)
        return 0;
    int cnt = 0;
    vector<bool> p(N, 1);
    p[0] = p[1] = 0;
    for (int i = 2; i < N; i++)
    {
        if (p[i] == 0)
            continue;
        if (p[i] == 1)
            cnt++;
        for (size_t j = i * i; j < N; j += i)
            p[j] = 0;
    }
    cout << cnt;
}
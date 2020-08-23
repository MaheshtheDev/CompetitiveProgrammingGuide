#include <bits/stdc++.h>
using namespace std;
const int N = 31700;
vector<int> primes;

void seive()
{
    vector<int> p(N, 1);
    for (int i = 0; i < N; i++)
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
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        for (auto prime : primes)
        {
            if (prime * prime > r)
                break;
            vector<int> p(r - l + 1, 1);
            int start = (l / prime) * prime;
            if (prime >= l)
                start = prime * 2;
            for (size_t i = start; i <= r; i += prime)
            {
                if (i >= l)
                    p[i - l] = 0;
            }
            for (size_t i = 0; i < r - l + 1; i++)
            {
                if (p[i] == 1 and i + 1 != 1)
                    cout << i + 1 << endl;
            }
        }
    }
}
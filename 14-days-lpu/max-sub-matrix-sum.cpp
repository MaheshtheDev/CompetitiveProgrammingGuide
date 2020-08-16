#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];

    int ans =0;
    for(int l1=0;l1<n;l1++){
        for (size_t r1 = 0; r1 < m; r1++){

            for (int l2 = 0; l2 < n; l2++){
                for (int r2 = r1; r2 < m; r2++){

                    int sum = 0;
                    for (int  i = l1; i <= l2; i++)
                    {
                        for (size_t j = r1; j <= r2; j++)
                        {
                            sum += a[i][j];
                        }
                    }
                    ans = max(sum,ans);                     
                }
            }
        }
        
    }
    cout<<ans;
}
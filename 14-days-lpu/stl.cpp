#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    /*
    sort(lower_bound| a+0 ,upper_bound| a+n)
    to find lb,ub array should be sorted
    anagrams can be true if those sorts are equal sort(x)==sort(y)

    */

  /*
    input for pair sort
    6
    1 3
    1 2
    2 4
    2 7
    3 2
    3 1
*/

//    int n; cin>>n;
//    pair<int,int> p[n];
//    for(int i=0;i<n;i++) cin>>p[i].first>>p[i].second;

//    sort(p,p+n,[&](pair<int,int> x, pair<int,int> y){
//        if(x.first==y.first) return x.second > y.second;
//        return x.first>y.first;
//    });
//    for(int i=0;i<n;i++) cout<<p[i].first<<" "<<p[i].second<<endl;

    int n;
    cin>>n;
    priority_queue<pair<int,int>> Q;

    for(int i=0; i < n; i++){
        int x,y;
        cin>>x>>y;
        Q.push({-x,y});
    }

    while(!Q.empty()){
        cout<< -Q.top().first<<" "<<Q.top().second<<endl;
        Q.pop();
    }
    

}
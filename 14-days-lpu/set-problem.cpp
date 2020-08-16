#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int arr[] = {5,1,2,6,8,9,7,13,14,15,20};
    unordered_set<int> s;
    for(int x:arr){
        s.insert(x);
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_len=1;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)==s.end()){
            int no = arr[i] + 1;
            int cnt = 1;
            while(s.find(no)!=s.end()){
                no++; cnt++;
            }
            max_len = max(max_len,cnt);
        }
    }
    cout<<max_len;
}
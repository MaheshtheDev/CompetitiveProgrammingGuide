#include <bits/stdc++.h>
using namespace std;
// O(N*N) and O(1)
int main()
{
    vector<int> a = {5,-2,10,9,5,6,-3};
    int size = a.size();
    while(size--){
        int small = INT_MAX,idx=0;
        for(int i = a.size()-size-1 ;i<a.size();i++){
            if(a[i]<small) { small = a[i]; idx = i;}
        }
        swap(a[idx],a[a.size()-size-1]);
    }
    for(auto x: a){
        cout<<x<<" ";
    }
}
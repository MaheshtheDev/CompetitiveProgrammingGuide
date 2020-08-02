#include <bits/stdc++.h>
using namespace std;
//  O(N*N) and O(1)
int main()
{
    vector<int> a = {5,2,8,9,5,6,3};
    for(int i=1;i<a.size();i++){
        if(a[i]<a[i-1]){
            int j = i;
            while(j and a[j]<a[j-1]){
                swap(a[j],a[j-1]);
                j--;
            }
        }
    }
    for(auto i: a) cout<<i<<" ";
}
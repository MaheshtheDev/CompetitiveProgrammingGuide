#include <bits/stdc++.h>
using namespace std;
// O(N*N) and O(1)
int main()
{
    vector<int> a = {5,2,8,9,5,6,3};
    int flag=1,counter=0;
    while(flag){
        counter=0;
        for(int i=1;i<a.size();i++){
            if(a[i]<a[i-1]) swap(a[i],a[i-1]);
            else counter++;
        }
        if(counter==a.size()-1) flag = 0;
    }
    for(auto x: a) cout<<x<<" ";
}
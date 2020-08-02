#include <bits/stdc++.h>
using namespace std;
// O(N) and O(1)
vector<int> shiftnum(vector<int> array, int num, int idx){
    for(int i=0;i<idx+1;i++){
        if(i==idx) (array)[i] = num;
        else (array)[i] = (array)[i+1];
    }
    return array;
}

int main()
{
    vector<int> a = {141,1,17,-7,-17,8,-27};
    vector<int> ans;
    ans.push_back(INT_MIN);
    ans.push_back(INT_MIN);
    ans.push_back(INT_MIN);
    for(int i=0;i<a.size();i++){
        if((ans)[2]==INT_MIN or ((a)[i])>(ans)[2]) ans = shiftnum(ans,((a)[i]),2);
        else if((ans)[1]==INT_MIN or ((a)[i])>(ans)[1]) ans = shiftnum(ans,((a)[i]),1);
        else if((ans)[0]==INT_MIN or a[i]>ans[0]) ans = shiftnum(ans,((a)[i]),0);

        // sort(ans.begin(),ans.end());
        // if(a[i]>=ans[2] and a[i]!=ans[1] and a[i]!=ans[0]) ans[2]= a[i];
        // else if(a[i]>=ans[1] and a[i]!=ans[0]) ans[1] = a[i]; 
        // else if(a[i]>ans[0]) ans[0] = a[i]; 
        // cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
    }
    for ( auto x: ans){
        cout<<x<<" ";
    }
}
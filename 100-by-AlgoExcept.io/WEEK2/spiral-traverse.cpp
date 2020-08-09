#include <bits/stdc++.h>
using namespace std;
// O(N) and O(1)
int main()
{
    int a[][4]={{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}},rgt=3,lft=0,top=0,btm=3;
    while(rgt>lft or top<btm){
        for(int i=lft;i<=rgt;i++){
            cout<<a[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=btm;i++){
            cout<<a[i][rgt]<<" ";
        }
        rgt--;
        for(int i=rgt;i>=lft;i--){
            cout<<a[btm][i]<<" ";
        }
        btm--;
        for(int i=btm;i>=top;i--){
            cout<<a[i][lft]<<" ";
        }
        lft++;
    }
}


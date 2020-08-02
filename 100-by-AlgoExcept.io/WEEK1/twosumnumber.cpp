#include <bits/stdc++.h>
using namespace std;

// Complex: o(n*n) || Space: O(1)
void sol1(int a[],int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]+a[j]==n and i!=j) {
                cout<<a[i]<<" "<<a[j]<<endl;
                exit(0);
            }
        }
    }
}

// complex = o(n) || Space=o(n)
void sol2(int a[], int n)
{
    unordered_map<int, bool> h;
    for(int i=0; i<n; i++)
    {
        int y = n-a[i];
        if(h.find(y)!=h.end())
        {
            cout<<a[i]<<" "<<y<<endl;
            exit(0);
        }
        h[a[i]] = true;
    }
}

void sol3(vector<int> a, int n)
{
    // int st=0,ed=6,mid=3;
    sort(a.begin(),a.begin()+6);
    // cout<<" ";
    int i=0, j=5;
    while(1){
        if(a[i]+a[j]==n) {
            cout<<a[i]<<" "<<a[j]<<endl; 
            exit(0);
        }
        else if(a[i]+a[j]<n) i++;
        else j++;
    }

}

int main()
{

    vector<int> a;
    a.push_back(1);
    a.push_back(4);
    a.push_back(3);
    a.push_back(5);
    a.push_back(-1);
    int n=7;
    // sol2(a,n);
    sol3(a,n);
    return 0;
}
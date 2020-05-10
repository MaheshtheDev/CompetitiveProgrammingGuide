#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,temp;
    cin>>n;
    // Method 1
    temp = n;
    int count = 0;
    while(temp){
        count++;
        temp/=10;
    }    
    cout<<"Naive Method:"<<count<<endl;
    // Method 2
    // This method is more efficient and can do in o(1)
    cout<<"Log(n) + 1 way:"<<floor(log10(n)+1);
}
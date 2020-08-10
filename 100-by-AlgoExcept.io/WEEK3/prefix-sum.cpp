#include <bits/stdc++.h>
using namespace std;
/*
    Main concept is prefix-sum
    traverse array by suming up.
    like arr[]={1,2,3,4} prefix-sum array is {1,3,6,10}
*/
int main()
{
    int arr[] = {0,0,0,0,0},m=3,a[]={2,1,1},b[]={4,3,2};
    for(int i=0;i<m;i++){
        arr[a[i]-1]+=100; arr[b[i]]-=100; m=3;
    }
    int size = sizeof(arr)/sizeof(arr[0]),max = INT_MIN;
    size--;int sum=0,i=0;   
    while(i<size){
        if(max<(arr[i]+sum)) max = arr[i]+sum;
        sum+=arr[i];
        i++;
    }
    cout<<max;
}
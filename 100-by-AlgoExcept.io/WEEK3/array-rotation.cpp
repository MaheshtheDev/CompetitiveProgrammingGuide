#include <bits/stdc++.h>
using namespace std;
/*
    Naive sol is separate first k element in one arr1 and shift original(arr) element to upfront
    then append the arr1 to arr O(N) || O(K) cause arr1 takes k elements space
    sol2: O(N*K) || O(1)
        leftRotate(arr[], d, n)
        start
        For i = 0 to i < d
            Left rotate all elements of arr[] by one
        end
*/
// Best and optimized one below
int gcd(int a,int b){
    // if(a==0) return b;
    // if(b==0) return a;
    // if(a==b) return a;
    // if(a>b) return gcd(a-b,b);
    // return gcd(a,b-a);

    // optimized one
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12},k=3;
    int size = sizeof(arr)/sizeof(arr[0]);
    int kn = gcd(size,k);
    for(int j=0;j<kn;j++){
    for(int i=j+kn;i<size;i+=kn){
        swap(arr[i-kn],arr[i]);
    }}
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
}
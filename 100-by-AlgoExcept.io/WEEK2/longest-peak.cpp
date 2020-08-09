#include <bits/stdc++.h>
using namespace std;
// O(N) || O(1)
int main()
{
    int a[] = {1,2,3,3,4,0,-1,-2,-3,-4,-5,10,6,5,-1,-3,2,3},curr=1,fup=1,fdn=1,peak=INT_MIN,inc=0;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1] and fup<2){ curr++;}
        else if(a[i]<a[i-1]) { inc=curr;curr++; fup++; }
        else{
            if(inc) { peak<curr?peak=curr: curr=1; curr = curr-inc+1; }
            else curr=1;
            inc = 0;
            fup=1; fdn=1;
        }
    }
    cout<<peak;
}

// O(n) time | O(1) space - where n is the length of the input array
// int longestPeak(vector<int> array) {
//  int longestPeakLength = 0;
//  int i = 1;
//  while (i < int(array.size() - 1)) {
//  bool isPeak = array[i - 1] < array[i] && array[i] > array[i + 1];
//  if (!isPeak) {
//  i += 1;
//  continue;
//  }
//  int leftIdx = i - 2;
//  while (leftIdx >= 0 && array[leftIdx] < array[leftIdx + 1]) {
//  leftIdx -= 1;
//  }
//  int rightIdx = i + 2;
//  while (rightIdx < array.size() && array[rightIdx] < array[rightIdx - 1]) {
//  rightIdx += 1;
//  }
//  int currentPeakLength = rightIdx - leftIdx - 1;
//  longestPeakLength = max(longestPeakLength, currentPeakLength);
//  i = rightIdx;
//  }
//  return longestPeakLength;
// }
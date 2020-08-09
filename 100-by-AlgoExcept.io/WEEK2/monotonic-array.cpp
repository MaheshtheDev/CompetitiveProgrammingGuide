#include <bits/stdc++.h>
using namespace std;
// O(N) || O(1)
int main()
{
    int a[]={-1,-5,-10,-11,-15,-20},n=0,counterasc=0,counterdse=0;
    n=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1] and counterdse==0) { counterasc++; }
        else if(a[i]<a[i-1] and counterasc==0) { counterdse++; }
        else break;
    }
    if(counterasc==n-1 or counterdse==n-1) cout<<"Monotonic Array";
    else cout<<"Not Monotonic Array";
}

// Sol1
bool breaksDirection(int direction, int previousInt, int currentInt) {
    int difference = currentInt - previousInt;
    if (direction > 0)
    return difference < 0;
    return difference > 0;
}

// Sol2
// O(n) time | O(1) space - where n is the length of the array
bool isMonotonic(vector<int> array) {
    if(array.size() <= 2)
        return true;
    int direction = array[1] - array[0];
    for(int i = 2; i < array.size(); i++) {
        if (direction == 0) {
        direction = array[i] - array[i - 1];
        continue;
    }
    if(breaksDirection(direction, array[i - 1], array[i]))
        return false;
    }
    return true;
}
bool isMonotonic(vector<int> array) {
    bool is_non_decreasing = true;
    bool is_non_increasing = true;
    for (int i = 1; i < array.size(); i++) {
    if (array[i] < array[i - 1]) {
        is_non_decreasing = false;
    }
    if (array[i] > array[i - 1]) {
        is_non_increasing = false;
    }
    }
    return is_non_decreasing || is_non_increasing;
}
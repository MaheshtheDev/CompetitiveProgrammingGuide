#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[8] = {12,3,1,2,-6,5,-8,6};
    int size = 8,i=0,j=0,flag=1,N=0;
    // cin>>N;
    while (flag)
    {
        flag=0;
        for(int i =1;i<size;i++){
            if(a[i]<a[i-1]) { swap(a[i],a[i-1]); flag = 1;}
        }
    }
   for (int i = 0; i < size-2; i++)
   {
       int lstidx=size-1,j=i+1;
       while(j<=lstidx){
           if((a[i]+a[j]+a[lstidx])==N) { cout<<a[i]<<" "<<a[j]<<" "<<a[lstidx]<<endl;j++;lstidx--;}
           else if((a[i]+a[j]+a[lstidx])>N) lstidx--;
           else j++;
       }
   }
   
}
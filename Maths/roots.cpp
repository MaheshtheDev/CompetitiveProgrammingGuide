#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=752,b=904,c=164;
    int d = b*b - 4*a*c;
    int root1 = (-b + sqrt(b*b - 4*a*c));
    root1 /= (2*a);
   int root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
   root1>=root2 ? cout<<root1<<" "<<root2:cout<<root2<<" "<<root1;

}
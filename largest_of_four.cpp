#include <iostream>
using namespace std;
int main()
{
     int max(int,int,int,int);
     cout<<"enter four integers";
     int w,x,y,z;
     cin>> w >> x >> y >> z;
     cout<<"maximum = "<<max(w,x,y,z);
}
int max (int n1, int n2, int n3, int n4)
{
     int ans=n1;
     if (n2>ans)ans=n2;
     if (n3>ans)ans=n3;
     if (n4>ans)ans=n4;
     return ans;
}









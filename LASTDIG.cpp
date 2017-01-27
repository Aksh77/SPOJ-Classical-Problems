//The Last Digit
//solved on 01-10-16

#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
int t, ans;
long int a, b;
cin>>t;
while(t--)
{
cin>>a>>b;
a=a%10;
if(b==0)
cout<<"1";
else
{
b=b%4;
if(b==0)
ans=pow(a,(b+4)); 
else
ans=pow(a,b);
cout<<ans%10;
}
cout<<endl;
}
return 0; 
}

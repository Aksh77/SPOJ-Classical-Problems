//Rectangles
//solved on 02-10-16

#include <iostream>
using namespace std;

int main() 
{
	int m;
    long int c=0, n=0;
	cin>>m;
	for(int i=1; i<=m; i++)
	{
        n=0;
        for(int j=1; j<=i; j++)
        {
            if(i%j==0)
                n++;
        }
        if(n%2==0)
            c=c+(n/2);
        else
            c=c+((n+1)/2);
	}
	cout<<c;
	return 0;
}

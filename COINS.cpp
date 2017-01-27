//Bytelandian gold coins
//Dynamic Programming
//solved on 06-10-16

#include <iostream>
#include <string>

using namespace std;

long long int conv(long long int n);
long long int c[1000001], n;

int main()
{
    for(int i=1; i<=1000000; i++)
    {
        if(i<=6)
            c[i]=i;
        else
        {
            if(i>((i/2)+(i/3)+(i/4)))
                c[i]=i;
            else
                c[i]=c[i/2]+c[i/3]+c[i/4];
        }
    }
    cin>>n;
    while(n!=-1)
    {
        cout<<conv(n)<<endl;
        n=-1;
        cin>>n;
    }
    
    return 0;
}

long long int conv(long long int n)
{
    if(n<=1000000)
        return c[n];
    else if(n>=((n/2)+(n/3)+(n/4)))
        return n;
    else return (conv(n/2)+conv(n/3)+conv(n/4));
}

//Candy III
//solved on 03-10-16

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned long long int sum, n, m, t;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(long int i=0; i<n; i++)
        {
            cin>>m;
            sum=((sum%n)+(m%n))%n;
        }
        if(sum%n==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

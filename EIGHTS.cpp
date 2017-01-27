//Triple Fat Ladies
//solved on 06-10-16

#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned long long int t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        if(k%2!=0)
        {
            cout<<((5*(k/2))+1);
            cout<<"92"<<endl;
        }
        else
        {
            cout<<((5*(k/2))-1);
            cout<<"42"<<endl;
        }
    }
    
    return 0;
}

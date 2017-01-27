//To and Fro
//solved on 05-10-16

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, l, p, c;
    string s;
    cin>>n;
    while(n!=0)
    {
        cin>>s;
        l=s.length();
        
        c=0;
        while(c<n)
        {
            for(int k=0; k<(l/n); k++)
            {
                p=k*n;
                if(k%2==0)
                    p=p+c;
                else
                    p=p+n-1-c;
                cout<<s[p];
            }
            c++;
        }
        cout<<endl;
        cin>>n;
    }
    return 0;
}

//Hangover
//Mathematics
//solved on 07-10-16

#include <iostream>
 
using namespace std;
 
int main()
{
    float c, a;
    int n;
    cin>>c;
    while(c!=0.00)
    {
        n=0;
        a=0.00;
        for(int i=2; i<=300; i++)
        {
            a=a+(float)(1.0/i);
            n++;
            if(a>=c)
                break;
        }
        cout<<n<<" card(s)"<<endl;
        cin>>c;
    }
    
    return 0;
}

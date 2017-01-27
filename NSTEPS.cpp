//Number Steps
//solved on 30-09-2016

#include <iostream>
using namespace std;

int main() {
	
	int t;
	int x, y;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>x>>y;
		if((x%2==0) && (y%2==0) && ((x-y)==2 || (x-y)==0))
		{
			cout<<(x+y); 
        }
		else if((x%2!=0) && (y%2!=0) && ((x-y)==2 || (x-y)==0))
		{
			cout<<(x+y-1);
		}
		else
		{
			cout<<"No Number";
		}
		if(i!=(t-1))
		{
			cout<<endl;
		}
	}

	return 0;
}

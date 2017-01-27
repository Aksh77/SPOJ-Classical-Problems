//Feynman
//solved on 30-09-16

#include <iostream>
using namespace std;

int main() {
	
	int n;
	unsigned long long int m=0;
	cin>>n;
	while(n!=NULL)
	{
		for(int i=1; i<=n; i++)
		{
			m=m+(i*i);
		}
		cout<<m<<endl;
		cin>>n;	
		m=0;
	}
	
	return 0;
}

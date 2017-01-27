//Fashion Shows
//solved on 01-10-16

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int t, n;
	long int h;
	cin>>t;
	while(t--)
	{
		h=0;
		cin>>n;
		int m[n], w[n];
		for(int i=0; i<n; i++)
		{
			cin>>w[i];
		}
		for(int i=0; i<n; i++)
		{
			cin>>m[i];
		}
		sort(m,m+n);
		sort(w,w+n);
		for(int i=0; i<n; i++)
		{
			h=h+(m[i]*w[i]);
		}
		cout<<h<<endl;
	}

	return 0;
}

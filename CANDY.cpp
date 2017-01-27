//Candy I
//solved on 30-09-16

#include <iostream>
using namespace std;

int main() {
	
	int n;
	long int sum, diff, ans;
	cin>>n;
	while(n!=-1)
	{
		sum=0;
		diff=0;
		ans=0;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n!=0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			diff=sum/n;
			for(int j=0; j<n; j++)
			{
				if(a[j]<diff)
				{
					ans+=(diff-a[j]);
				}
			}
			cout<<ans<<endl;
		}
		
		cin>>n;
	}

	return 0;
}

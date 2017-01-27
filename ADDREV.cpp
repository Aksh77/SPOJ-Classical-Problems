//Adding Reversed Numbers
//solved on 04-10-16

#include <stdio.h>
using namespace std;

int rev(int n)
{
	int rev_n=0;
	while(n>0)
	{
	rev_n=(rev_n*10)+(n%10);
	n/=10;
	}
	return rev_n;
}

int main() {
	int i,N,a,b;
	scanf("%d",&N);
	for (i=0; i<N; i++)
	{
		scanf("%d %d",&a,&b);
		int rev_a=rev(a);
		int rev_b=rev(b);
		int sum=rev_a+rev_b;
		int rev_sum=rev(sum);
		printf("%d\n",rev_sum);
	}

	return 0;
}

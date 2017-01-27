//Factorial
//solved on 04-10-16

#include<stdio.h>
using namespace std;

int fact_zero(long long int a)
{
	long long int zeroes=0;
	while(a>0)
	{
		a=a/5;
		zeroes+=a;
	}
	return zeroes;
}

int main()
{
	long long int t,n,i;
	scanf("%lld\n",&t);
	for(i=0; i<t; i++)
	{
		scanf("%lld",&n);
		printf("%d\n",fact_zero(n));
	}
}

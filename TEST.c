//Life, the Universe, and Everything
//solved on 10-04-16

#include <stdio.h>

int main() {
	int n;
	start:
	scanf("%d\n",&n);
	if (n>=0&&n!=42)
	{
		printf("%d\n",n);
		goto start;
	}
	else
	{
		goto stop;
	}
	stop:
	return 0;
}

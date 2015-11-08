#include <stdio.h>

long int fn(int a, int n)
{
	int i,sum=0;
	long m=1;
	for(i=1;i<=n;i++)
		sum+=m*a,m*=10;
	return sum;
}

int main(void)
{
	int a, i, n;
	int ri, repeat;
	long sn;
	long fn(int a, int n);

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%ld%d", &a, &n);
		sn=0;
		for(i=1;i<=n;i++)
			sn+=fn(a,i);
		printf("%ld\n", sn);
	}
}

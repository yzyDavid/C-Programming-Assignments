#include "stdio.h"
#include "math.h"
int isPrime(int);
int main(void)
{
	int count, i, m, n, sum;
	int repeat, ri;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		count=sum =0;
		scanf("%d%d", &m, &n);
		for(i=m;i<=n;i++)
		{
			sum+=isPrime(i)?i:0;
			count+=isPrime(i)?1:0;
		}
		printf("Count = %d, sum = %d\n", count, sum);
	}
}

int isPrime(int n)
{
	if(2==n)
		return 1;
	if(1==n)
		return 0;
	int i=2;
	for(;i<sqrt(n)+1;i++)
		if(0==n%i)
			return 0;
	return 1;
}

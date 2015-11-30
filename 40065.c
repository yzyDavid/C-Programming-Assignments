#include "stdio.h"
#include "math.h"

int isPrime(int);

int main(void)
{
	int i, k, m, tmp;
	int repeat, ri;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &m);
		printf("%d = ", m);
		tmp=m;
		for(i=2;i<=m;i++)
		{
			if(!isPrime(i))
				continue;
			if(0==tmp%i)
			{
				printf("%d",i);
				tmp/=i;
				if(tmp==1)
				{
					printf("\n");
					break;
				}
				else
				{
					printf("*");
				}
				i--;
			}
		}
	}
}

int isPrime(int n)
{
	if(2==n)
		return 1;
	int i=2;
	for(;i<sqrt(n)+1;i++)
		if(0==n%i)
			return 0;
	return 1;
}

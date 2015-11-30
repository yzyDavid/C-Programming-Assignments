#include "stdio.h"

int factorsum(int number);

int main(void)
{
	int i, m, n;
	int repeat, ri;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d%d", &m, &n);
		for(i=m;i<=n;i++)
			if(factorsum(i))
				printf("%d ",i);
		printf("\n");
	}
}

int factorsum(int number)
{
	int i=1;
	int sum=0;
	for(;i<=number/2+1;i++)
	{
		if(number%i==0)
			sum+=i;
	}
	if (number==sum)
		return 1;
	return 0;
}

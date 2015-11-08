#include "stdio.h"
#include "math.h"

long fib(int n);

int main(void)
{
	int i, m, n;
	int repeat, ri;
	long f;

	scanf("%d",&repeat);
	for(ri = 1; ri <= repeat; ri++)
	{
		scanf("%d%d", &m, &n);
		i=1;
		while(1)
		{
			f=fib(i);
			if(f<=n&&f>=m)
				printf("%ld ",f);
			else if(f>n)
				break;
				i++;
		}
		printf("\n");
	}
}

long fib(int n)
{
	if(1==n||2==n)
		return 1;
	return fib(n-1)+fib(n-2);
}

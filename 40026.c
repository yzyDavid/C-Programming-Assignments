#include "stdio.h"
#include "math.h"

int isPrime(int);

int main(void)
{
	int count, i, j, m, n;
	int flag=0;
	count=0;

	scanf("%d%d", &m, &n);
	if(m % 2 != 0) m = m + 1;
	if(m >= 6)
	{
		for(i=m;i<=n;i+=2)
		{
			for(j=2;j<i/2+1;j++)
			{
				if(isPrime(j)&&isPrime(i-j))
				{
					if(count%5==0&&flag!=0)
						printf("\n");
					printf("%d=%d+%d ",i,j,i-j);
					count++;
					flag=1;
					break;
				}
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

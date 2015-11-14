#include "stdio.h"
#include "math.h"

int isPrime(int n);

int main(void)
{
	int count=0, i, m, n, number;
	scanf("%d%d", &m, &n);
	if(m % 2 != 0) m = m + 1;
	if(m >= 6){
		for(number=m;number<=n;number+=2)
		{
			for(i=2;i<number;i++)
			{
				if(isPrime(i)&&isPrime(number-i))
				{
					printf("%d=%d+%d ",number,i,number-i);
					count++;
					if(count%5==0)
						printf("\n");
					break;
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

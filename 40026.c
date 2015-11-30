#include "stdio.h"
#include "math.h"

int isPrime(int n);

int main(void)
{
	int i, j, k, m, looptimes;

	scanf("%d", &looptimes);
	for(i=1;i<=looptimes;i++)
	{
		scanf("%d",&m);
		printf("%d = ",m);
		k=m;
		for(j=2;j<=k;j++)
            if(m%j==0&&isPrime(j))
            {
                printf("%d",j);
                m/=j;
                j--;
                if(1!=m)
                    printf("*");
            }

        printf("\n");
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

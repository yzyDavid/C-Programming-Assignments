#include "stdio.h"
int main(void)
{
	int i, m, n;
	int repeat, ri;
	int is(int number);

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d%d", &m, &n);
		printf("result:\n");
		for(i=m;i<=n;i++)
		{
			if(is(i))
				printf("%d\n",i);
		}
	}
}

int is (int num)
{
	int sum=0;
	int def=num;
	while(num!=0)
	{
		sum+=(num%10)*(num%10)*(num%10);
		num/=10;
	}
	if(def==sum) return 1;
	return 0;
}

#include <stdio.h>
int main(void)
{    
	int n;
	int repeat, ri;
	void pyramid(int n);

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &n);
		pyramid(n);
	}
}

void pyramid(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		for(j=0;j<i;j++)
			printf("%d ",i);
		printf("\n");
	}
}

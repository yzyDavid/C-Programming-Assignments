#include <stdio.h>
int main(void)
{
	int i, n, sum=0;
	int repeat, ri;
	int a[10];
	double aver;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &n);
		sum=0;
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			sum+=a[i];
		}
		aver = (double)sum / n;
		printf("average = %.2f\n", aver);
	}
	return 0;
}


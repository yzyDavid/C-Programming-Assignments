#include <stdio.h>
int main(void)
{
	int i, index, n, t;
	int repeat, ri;
	int a[10];
	int max_i, min_i;
	int tmp;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		max_i = min_i = 0;
		scanf("%d", &n);
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			if (a[i] < a[min_i])
				min_i = i;
		}

		tmp = a[0];
		a[0] = a[min_i];
		a[min_i] = tmp;

		for(i = 0; i < n; i++)
		{
			if (a[i] > a[max_i])
				max_i = i;
		}

		tmp = a[n-1];
		a[n-1] = a[max_i];
		a[max_i] = tmp;

		printf("After swap: ");
		for(i = 0; i < n; i++) 
			printf("%d ", a[i]);
		printf("\n");
	}
	return 0;
}

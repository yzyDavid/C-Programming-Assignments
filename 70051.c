#include <stdio.h>

int main( )
{
	int i, index, n, temp;
	int repeat, ri, j, max;
	int a[10];

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		max = 0;
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; ++j)
			{
				if(a[i] < a[j])
					break;
				max = i;
			}
		}
		temp = a[max];
		a[max] = a[n - 1];
		a[n - 1] = temp;
		printf("max = %d, index = %d\n", a[n - 1], max);
		for(i = 0; i < n; i++) 
			printf("%d ", a[i]);
		printf("\n");
	}
	return 0;
}

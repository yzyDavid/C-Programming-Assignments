#include <stdio.h>
int main(void)
{
	int i, index, j, n, temp;
	int repeat, ri;
	int a[10];

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (i = 0; i < n; i++)
			for(j = i; j < n; j++)
				if ( a[j] > a[i] )
				{
					temp = a[j];
					a[j] = a[i];
					a[i] = temp;
				}
		printf("After sorted: ");
		for(i = 0; i < n; i++) 
			printf("%d ", a[i]);
		printf("\n");
	}
}

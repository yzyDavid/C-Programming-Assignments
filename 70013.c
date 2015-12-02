#include <stdio.h>
int main(void)
{
	int i, n, temp;
	int repeat, ri;
	int a[10];
	int b[10];

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for(i = 0; i < n; i++)
			b[i]=a[n-i-1];
		for(i = 0; i < n; i++)
			printf("%d ", b[i]);
		printf("\n");
	}
	return 0;
}


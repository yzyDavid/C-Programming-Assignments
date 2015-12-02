#include <stdio.h>
int main(void)
{
	int i, index, n;
	int ri, repeat;
	int a[10];
	int max;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		max=a[0];
		for(i = 1; i < n; i++)
		{
			if (a[i] > max)
				max = a[i];
		}
		for(i =0; i < n; i++)
			if(a[i] == max)
				break;
		index = i;
		printf("max = %d, index = %d\n", a[index], index);
	}
	return 0;
}

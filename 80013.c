#include <stdio.h>
void sort(int a[],int n);
int main(void)
{
	int i, n;
	int repeat, ri;
	int a[10];

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		sort(a, n);
		printf("After sorted: ");
		for(i = 0; i < n; i++)
			printf("%d ", a[i]);
		printf("\n");
	}
}

void sort(int a[],int n)
{
	int i, j, t;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (a[j] < a[i])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
}

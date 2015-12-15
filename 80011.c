#include <stdio.h>

void mov(int *x, int n, int m);

int main(void)
{
	int i, m, n;
	int a[80];

	scanf("%d%d", &n, &m);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	mov(a, n, m);
	printf("After move: ");
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n"); 
}

void mov(int *x, int n, int m)
{
	int b[80];
	int i, f;
	m %= n;
	f = n - m;
	for (i = 0; i < n; i++)
	{
		b[i] = x[(f + i) % n];
	}
	for (i = 0; i < n; i++)
	{
		x[i] = b[i];
	}
}

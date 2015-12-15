#include <stdio.h>

int search(int list[], int n, int x);

int main(void)
{
	int i, index, n, res, x;
	int repeat, ri;
	int a[10];

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		scanf("%d", &x);
		res = search(a, n, x);
		if(res != -1)
			printf("index = %d\n", res);
		else
			printf("Not found\n");
	}
}

int search(int list[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (list[i] == x)
			return i;
	return -1;
}

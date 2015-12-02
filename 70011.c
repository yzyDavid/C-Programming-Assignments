#include <stdio.h>
int main(void)   
{
	int i, j, n, x;
	int repeat, ri;
	int a[10];

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		scanf("%d", &x);
		for(i =0; i < n; i++)
		{
			if( x >= a[i] && x < a[i+1] || 0 == i && x < a[0] || x > a[n-1]&& n-1==i)
			{
				if(0 == i && x<a[0])
					i=-1;
				for(j=n;j>i+1;j--)
				{
					a[j]=a[j-1];
				}
				a[i+1]=x;
				break;
			}
		}
		for(i = 0; i < n + 1; i++)
			printf("%d ", a[i]);
		putchar('\n');   
	}
	return 0;
}

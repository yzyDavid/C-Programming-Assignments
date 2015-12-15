#include "stdio.h"
#include "math.h"
int main(void)
{
	int flag, i, j, n;
	int a[6][6];
	int repeat, ri;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		flag = 1;
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &a[i][j]);
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				if(i > j && a[i][j] != 0)
				{
					flag = 0;
					break;
				}
		if(flag != 0)  printf("YES\n");
		else  printf("NO\n");
	}
	return 0;
}

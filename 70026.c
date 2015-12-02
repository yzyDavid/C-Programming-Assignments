#include "stdio.h"
int main(void)
{
	int flag, i, j, k, row, col, n;
	int a[6][6];
	int repeat, ri;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &a[i][j]);
		for(row = 0; row < n; row++)
		{
			for(col = 0; col < n; col++)
			{
				flag = 1;
				for(i = 0; i < n; ++i)
					if(a[row][col] > a[i][col])
						flag = 0;
				for(i = 0; i < n; ++i)
					if(a[row][col] < a[row][i])
						flag = 0;
				if(flag == 1)
					break;
			}
			if(flag == 1)
				break;
		}
		if(flag != 0)
			printf("a[%d][%d] = %d\n", row, col,a[row][col]);
		else
			printf("NO\n");
	}
}

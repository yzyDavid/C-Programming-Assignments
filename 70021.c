/*70021*/

#include <stdio.h> 
int main(void)
{
	int i, j, m, n, sum;
	int a[6][6];

	scanf("%d%d",&m,&n);
	for(i = 0; i < m; i++)    
		for(j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	for(j = 0; j < m; j++)
	{
		sum = 0;
		for(i = 0; i < n; i++)
			sum += a[j][i];
		printf("sum of row %d is %d\n", j, sum);
	}
	return 0;
}

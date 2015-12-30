#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int cmp(const void *a, const void *b)
{return *(int *)a - *(int *)b;}

int main()
{
	int a[10]={41,2,485,2,12,232,615,21};
	int i;
	qsort(a,10,sizeof(int),cmp);
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	return 0;
}

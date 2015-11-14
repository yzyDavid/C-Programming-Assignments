#include <stdio.h>
double fact(int n);
int main(void)
{    
	int i, m;
	double sum=0; 

	scanf("%d", &m);
	for(int p=1;i<=m;i++)
		sum+=fact(i);
	printf("1!+2!+...+%d! = %f\n", m, sum); 
}

double fact(int n)
{
	if (1==n)
		return 1;
	return n*fact(n-1);
}

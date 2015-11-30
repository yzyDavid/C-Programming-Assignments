#include <stdio.h>

double fact(int n)
{
	if(1==n)
		return 1;
	return n*fact(n-1);
}

int main(void)
{    
	int n;
	double factorial;
	double fact(int n);

	scanf ("%d", &n);
	factorial=fact(n);
	printf("%d! = %f\n", n, factorial);
}


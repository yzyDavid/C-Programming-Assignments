#include <stdio.h>
double fact(int n);
double multi(int n);	
int main(void)
{	
	int i; 
	int repeat, ri;
	double eps, sum, item;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%le", &eps);
		sum=1;
		i=1;
		while((item=fact(i)/multi(2*i+1))>=eps)
		{
			sum+=item;
			i++;
		}
		sum+=fact(i)/multi(2*i+1);

		printf("PI = %0.5f\n", 2 * sum);
	}

}

double fact(int n)
{
	if(1==n)
		return 1;
	return fact(n-1)*n;
}

double multi(int n)
{
	if(1==n)
		return 1;
	return multi(n-2)*n;
}

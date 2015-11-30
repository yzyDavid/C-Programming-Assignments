#include "stdio.h"
#include "math.h"
double funcos(double e, double x);

double fact(int n)
{
	if (1==n||0==n)
		return 1;
	return n*fact(n-1);
}

int main(void)
{
    int repeat, ri;
    double e, sum, x;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%le%le", &e, &x);
		sum=funcos(e,x);
        printf("sum = %f\n", sum);
    }
}

double funcos(double e, double x)
{
	double sum;
	int i=0;
	int flag=1;
	do
	{
		sum+=flag*pow(x,i)/fact(i);
		i+=2;
		flag*=-1;
	}
	while (pow(x,i)/fact(i)>=e);
	sum+=flag*pow(x,i)/fact(i);
	return sum;
}

#include <stdio.h>
int even(int n)
{
	return n%2==0?1:0;
}
int main(void)
{
	int n, sum;
	int ri, repeat;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){	
		int i,x;
		sum=0;
		for(;;)
		{
			scanf("%d",&x);
			if(x<=0)
				break;
			if(!even(x))
				sum+=x;
		}
		printf("The sum of the odd numbers is %d.\n", sum);
	}
}


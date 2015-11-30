#include <stdio.h>

long reverse(long number); 

int main(void)
{
	long in, res;
	int ri, repeat;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%ld", &in);
		res=reverse(in);
		printf("%ld\n", res);
	}
}

long reverse(long number)
{
	int origin=number;
	int result=0;
	while(origin!=0)
	{
		result*=10;
		result+=origin%10;
		origin/=10;
	}
	return result;
}

#include "stdio.h"
int main(void)
{
	int count, digit, in;
	int repeat, ri;
	int countdigit(int number, int digit);
	static int a=10;

	scanf("%d",&repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d%d", &in, &digit);
		count=countdigit(in,digit);
		printf("Number %d of digit %d: %d\n", in, digit, count);
	}
}

int countdigit(int number, int digit)
{
	int count=0;
	number=number<0?-number:number;
	do
	{
		if(number%10==digit)
			count++;
		number/=10;
	}
	while(number!=0);
	return count;
}

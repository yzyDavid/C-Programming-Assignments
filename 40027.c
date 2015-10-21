#include <stdio.h>
int main(void)
{
	int digit, in, power, temp;
	int repeat, ri;
	int i;
	char a[100];

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%s",a);
		i=0;
		while(a[i]!='\0')
		{
			if(a[i]!='-')
				printf("%c ",a[i]);
			i++;
		}
		printf("\n");
	}
}

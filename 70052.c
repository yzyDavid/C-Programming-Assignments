#include "stdio.h"
#define MAXLEN 80
int main(void)
{	
	char cc, ch;
	char str[MAXLEN];
	int i,count;
	int repeat, ri;

	scanf("%d", &repeat);
	getchar();
	for(ri = 1; ri <= repeat; ri++){
		i = 0;
		while((str[i] = getchar( )) != '\n') 
			i++; 
		str[i] = 0;
		count = 0;
		i = 0;
		cc = getchar();
		getchar();	
		while (str[i] != 0)
		{
			if (str[i] == cc)
				++count;
			++i;
		}
		printf("count = %d\n", count);
	}
}

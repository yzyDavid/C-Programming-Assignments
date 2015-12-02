#include "stdio.h"
#define MAXLEN 80
int main(void)
{ 
	char cc, ch;
	char str[MAXLEN];
	int count, flag, i, index;
	int repeat, ri;

	scanf("%d", &repeat);
	getchar();
	for(ri = 1; ri <= repeat; ri++){
		cc = getchar();
		getchar();

		i = 0;
		while((ch = getchar()) != '\n'){
			str[i++] = ch;
		}
		flag = 0;
		while(str[--i] && i > -1)
		{
			if(cc == str[i])
			{
				flag = 1;
				break;
			}
		}
		if(flag != 0)  
			printf("index = %d\n", i);
		else 
			printf("Not Found\n");
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#define MAXLEN 80
int main(void)
{  
	char ch;
	char str[MAXLEN], num[MAXLEN];
	int i, k;
	int repeat, ri;
	signed number;

	scanf("%d", &repeat);
	getchar();
	for(ri = 1; ri <= repeat; ri++){
		i = 0;
		while((ch = getchar()) != '\n'){
			str[i]=ch;
			i++;
		}
		str[i] = 0;
		i = 0;
		k = 0;
		while (str[i] != 0)
		{
			if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f'))
			{
				num[k++] = str[i];
			}
			++i;
		}
		num[k] = 0;
		sscanf(num, "%X", &number);
		printf("Dec = %d\n",number);
	}
	return 0;
}

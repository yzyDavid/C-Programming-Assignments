#include <stdio.h>     
#include <string.h>
int main(void)
{
	char str[80], num[80];
	int i, s, k;
	int repeat, ri;

	scanf("%d", &repeat);
	getchar();
	for(ri = 1; ri <= repeat; ri++){
		i = 0;
		while((str[i] = getchar( )) != '\n') 
			i++; 
		str[i] = 0;
		i = k = 0;
		while (str[i] != 0)
		{
			if(str[i] >= '0' && str[i] <= '9')
				num[k++] = str[i];
			++i;
		}
		num[k] = 0;
		sscanf(num, "%d", &s);
		printf("%d\n",s);
	}
	return 0;
}

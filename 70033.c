#include "stdio.h"
#define MAXLEN 80
int main(void)
{
	char ch;
	char str[MAXLEN];
	int count, i;
	int repeat, ri;

	scanf("%d", &repeat);
	getchar();
	for (ri = 1; ri <= repeat; ri++)
	{
		count = 0;
		i = 0;
		while ((ch = getchar()) != '\n')
		{
			str[i++] = ch;
			if (ch > 'A' && ch <= 'Z' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
				count++;
		}
		printf("count = %d\n", count);
	}
	return 0;
}

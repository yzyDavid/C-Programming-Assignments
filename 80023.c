#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char c;
	char str[80];
	int repeat, ri;
	void delchar(char *str, char c);

	scanf("%d", &repeat);
	getchar();
	for(ri = 1; ri <= repeat; ri++)
	{
		gets(str);
		scanf("%c", &c);
		getchar();
		delchar(str, c);
		printf("result: ");
		puts(str);
	}
}

void delchar(char *str, char c)
{
	int len;
	int i, j;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == c)
		{
			for (j = i; j < len; j++)
			{
				str[j] = str[j + 1];
			}
		i--;
		}
	}
}

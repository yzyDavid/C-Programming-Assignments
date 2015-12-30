#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *str_cat(char *s,char *t);

int main()
{
	char s[80],t[80];

	gets(s);
	gets(t);
	puts(str_cat(s,t));
	return 0;
}

char *str_cat(char *s,char *t)
{
	int ls, lt;
	int i;

	ls = strlen(s);
	lt = strlen(t);
	for (i = 0; i < lt; i++)
	{
		s[ls+i] = t[i];
	}
	return s;
}

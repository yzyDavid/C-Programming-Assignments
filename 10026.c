#include <stdio.h>
#include <string.h>

char newstr[80];
char *fun(char *p,char c_begin,char c_end);

int main()
{
	char str[80],c_begin,c_end;

	scanf("%s",str);
	getchar();
	c_begin=getchar();
	getchar();
	c_end=getchar();
	puts(fun(str,c_begin,c_end));
	return 0;
}

char *fun(char *p,char c_begin,char c_end)
{
	int begin, end;
	int i;
	int len;
	len = strlen(p);
	for (i = 0; i < len; i++)
	{
		if (p[i] == c_begin)
		{
			begin = i;
			break;
		}
	}
	for (; i < len; i++)
	{
		if (p[i] == c_end)
		{
			end = i;
			break;
		}
	}
	strncpy(newstr, &p[begin], end - begin + 1);
	newstr[end-begin+1] = 0;
	return newstr;
}

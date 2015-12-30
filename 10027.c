#include <stdio.h>
#include <string.h>

#define CHAR_WIDTH 2

char p[16];

void main()
{
	char *change(char s[4][20]);
	char s[4][20];
	int	i;
	for(i = 0; i < 4; i++)
		scanf("%s",s[i]);
	puts(change(s));
}

char *change(char s[4][20])
{
	int	i,t,len;
	len = strlen(s[0]);
	for (i = 0; i < 4; i++)
	{
		p[2*i]=s[i][len-2];
		p[2*i+1]=s[i][len-1];
	}
	p[2*i] = 0;
	return (p);
}

#include <stdio.h>
#include <string.h>

int max_len(char *s[],int n);

int main()
{
	int i,n;
	char s[10][80],*p[10];

	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%s",s[i]);
		p[i] = s[i];
	}
	printf("length=%d\n",max_len(p,n));
	return 0;
}

int max_len(char *s[],int n)
{
	int i, m = 0;
	for(i = 0; i < n; i++)
	{
		int a = strlen(s[i]);
		if(a > m)
		{
			m = a;
		}
	}
	return m;
}

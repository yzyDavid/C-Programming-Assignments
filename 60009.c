#include<stdio.h>
#include<string.h>

int main()
{
	int rp,ri;
	char c[1000];
	scanf("%d",&rp);
	gets(c);
	for(ri=0;ri<rp;ri++)
	{
		int count=0;
		int i=0;
		int len;
		gets(c);
		len=strlen(c);
		if(c[0]!=' ')
			++count;
		for(i=1;i<len;++i)
		{
			if(c[i]!=' '&&c[i-1]==' ')
				++count;
		}
		printf("count = %d\n",count);
	}
	return 0;
}

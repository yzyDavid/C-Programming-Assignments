#include<stdio.h>
#include<string.h>
int main()
{
	int i,ri,repeat;
	char *date[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	char str[80];

	scanf("%d",&repeat);
	getchar();
	for(ri=1;ri<=repeat;ri++){
		scanf("%s",str);
		for(i = 0; i < 7; ++i)
		{
			if(!strcmp(date[i],str))
			{
				printf("%d\n",i+1);
				goto fi;
			}
		}
			printf("-1\n");
fi:			;
	}
	return 0;
}


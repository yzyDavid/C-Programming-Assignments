#include <stdio.h>
#include <string.h>

int main(void)
{
	char sx[80], longest[80];
	int i, n;
	int repeat, ri;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++)
	{
		longest[0] = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%s", sx);
			if (strlen(longest) < strlen(sx))
				strcpy(longest, sx);
		}
		printf("The longest is: %s\n", longest);
	}
	return 0;
}   

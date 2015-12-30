#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[80], max[80] = "";
	int i;

	for (i = 0; i < 5; i++)
	{
		scanf("%s", str);
		if (strcmp(max, str))
			strcpy(max, str);
	}

	printf("Max is: %s\n", max);
}   



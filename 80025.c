#include <stdio.h>

int mirror(char *p);

void main()
{
    char s[80];
    int repeat, ri;
 
    scanf("%d", &repeat);
    getchar();
    for(ri = 1; ri <= repeat; ri++){
        gets(s);
        if(mirror(s) != 0)
      	    printf("YES\n");
        else
            printf("NO\n");
    }
}

int mirror(char *p)
{
	int n = strlen(p);
	int i;
	for (i = 0; i < n; i++)
		if (p[i] != p[n - 1 - i])
			return 0;
	return 1;
}

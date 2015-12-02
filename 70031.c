#include <stdio.h> 
int main(void)
{
	int i, j, temp;
	char str[80];		

	i = 0;
	while((str[i] = getchar( )) != '\n') 
		i++; 
	for(; i > -1; i--) 
		putchar(str[i]);
	return 0;
}


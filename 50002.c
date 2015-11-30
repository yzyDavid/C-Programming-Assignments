#include <stdio.h>
int sign(int x)
{
	return x>0?1:(x<0?-1:0);
}

int main(void)
{
    int x, y;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d",&x);
		y=sign(x);
        printf("sign(%d) = %d\n", x, y);
    }
}

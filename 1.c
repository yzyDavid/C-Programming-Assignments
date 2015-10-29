#include <stdio.h>

int GetInteger();
void pyramid(int n);

double fact(int n)
{
	if(1==n)
		return 1;
	return n*fact(n-1);
}

int main(void)
{
	int n;
    int looptimes, ri;
    void pyramid(int n);

    looptimes=GetInteger();
    for(ri = 1; ri <= looptimes; ri++)
        {
        n=GetInteger();
        pyramid(n);
        }

}

int GetInteger()
{
	int a;
	scanf("%d",&a);
	return a;
}


void pyramid(int n)
    {
    int i,j;
    for(i=1;i<=n;i++)
       {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d ",i);
        printf("\n");
       }
    }

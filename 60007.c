#include <stdio.h>
int fun(int n);
int main(void)
{	
	int m1,m2;

	scanf("%d%d", &m1, &m2);
	printf("%d的逆向是%d\n", m1, fun(m1));  
	printf("%d的逆向是%d\n", m2, fun(m2));  

}

long reverse(long number)
{
	int origin=number;
	int result=0;
	while(origin!=0)
	{
		result*=10;
		result+=origin%10;
		origin/=10;
	}
	return result;
}

int fun(int n)
{
	return reverse(n);
}

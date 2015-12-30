#include <stdio.h>

int main()
{
	int i;
	float a[9];
	for (i = 0; i < 9; i++)
	{
		scanf("%f",&a[i]);
	}
	printf("sum=%0.2f\n",a[0]+a[2]+a[4]+a[6]+a[8]);
	return 0;
}

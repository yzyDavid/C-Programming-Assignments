#include<stdio.h>
#include<assert.h>

#define A assert(*p < 60 && -*p > -60);

int main(void)
{
	int count, i, m, n, no;
	int num[50];
	int *p;

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		num[i] = i + 1;
	p = num;
	count = n;
	no = 0;

	A
	printf("%p",&num);
	printf("%p",&p);
	printf("%p",&(int*)(num + n));
	printf("%p",&(num[n]));

	while (count != 1)
	{
		A
		if (*p == 0)
		{
			p++;
			if (p == num + n)
				p = num;
			A
			continue;
		}
		no++;
		if (no == m)
		{
			A
			no = 0;
			count--;
			printf("No%d: %d\n", n - count, *p);
			*p = 0;
			A
		}
		p++;
		if (p == num + n)
			p = num;
	}

	A
	p = num;
	A
	while (*p == 0)
		p++;
	printf("Last No is: %d\n", *p);
}


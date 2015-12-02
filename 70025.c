#include "stdio.h"

int day_of_year(int year, int month, int day);

int main(void)
{
	int day, month, year;
	int repeat, ri;

	scanf("%d", &repeat);
	for(ri = 1; ri <= repeat; ri++){
		scanf("%d%d%d", &year, &month, &day);
		printf("days of year: %d\n", day_of_year(year, month, day));
	}
	return 0;
}

int day_of_year(int year, int month, int day)
{
	static const int day_month[] = {
		31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31,};
	int i, sum = day;

	for (i = 0; i < month - 1; ++i)
	{
		sum += day_month[i];
	}

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		if (month > 1)
			++sum;

	return sum;
}

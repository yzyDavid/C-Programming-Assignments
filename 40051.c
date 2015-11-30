/*this source code is copied from pointer's work*/

#include <stdio.h>

int main(void) {
	int rep;
	int i;
	int grade = 0;
	double average = 0;
	int failedCount = 0, count = 0;
	scanf("%d", &rep);
	for (i = 0; i < rep; ++i) {
		grade=0;
		average=0;
		failedCount=0;
		count=0;
		scanf("%d", &grade);
		while (grade > 0) {
			++count;
			if (grade < 60) {
				++failedCount;
			}
			average += grade;
			scanf("%d", &grade);
		}
		if (count > 0) {
			average /= count;
			printf("Grade average is %.2lf,the number of fail is %d\n", average, failedCount);
		}
	}
	return 0;
}

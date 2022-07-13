#include <stdio.h>

int main()
{
	int daysWeek;
	float piValue;
	printf("\nHow many days are there in the week?\n");
	scanf("%d", &daysWeek);
	printf("What's the value of Pi?\n");
	scanf("%f", &piValue);
	printf("\nHow many days in a week: %d\n", daysWeek);
	printf("The value of Pi to two points: %.2f\n", piValue);
	printf("There are %d days in the week.\n", daysWeek);
	printf("Pi Value is %f.\n", piValue);
	return 0;
}

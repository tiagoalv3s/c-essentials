#include <stdio.h>

int main()
{
	float startValue = 100;
	float interestRate = 0.015;
	float firstYearValue = startValue + startValue * interestRate;
	float secondYearValue = firstYearValue + firstYearValue * interestRate;
	float thirdYearValue = secondYearValue + secondYearValue * interestRate;

	printf("After first year: %f\n", firstYearValue);
	printf("After second year: %f\n", secondYearValue);
	printf("After third year: %f\n", thirdYearValue);
	return 0;
}
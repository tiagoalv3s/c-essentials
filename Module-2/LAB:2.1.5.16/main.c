/*
-Scenario:
	Write a program that asks the user for a day and month (separate integer values for both).
	Next, it should print the day number of the year for the given day and month.
	Assume that the year is a leap year (February has 29 days).
	Your program must print the same result as the expected output.
-Sample Input:
	29
	2
- Sample output:
	The day of the year: 60
*/

#include <stdio.h>

int main()
{
	int day, month, dayOfTheYear;
	dayOfTheYear = 0;
	
	printf("Please type in the day of the month:\n");
	scanf("%d", &day);
	printf("Please type in the month\n");
	scanf("%d", &month);
	
	if(month > 1)
		dayOfTheYear += 31;
	if(month > 2)
		dayOfTheYear += 29;
	if(month > 3)
	        dayOfTheYear += 31;
	if(month > 4)
		dayOfTheYear += 30;
	if(month > 5)
		dayOfTheYear += 31;
	if(month > 6)
		dayOfTheYear += 30;
	if(month > 7)
		dayOfTheYear += 31;
	if(month > 8)
		dayOfTheYear += 31;
	if(month > 9)
		dayOfTheYear += 30;
	if(month > 10)
		dayOfTheYear += 31;
	if(month > 11)
		dayOfTheYear +=30;
	dayOfTheYear += day;
	
	printf("The day of the year: %d\n", dayOfTheYear);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dayWeek;

	printf("Type in the number:\n");
	scanf("%d", &dayWeek);
	
	if(dayWeek==1)
		printf("The day of the week is Monday.\n");
	if(dayWeek==2)
		printf("The day of the week is Tuesday.\n");
	if(dayWeek==3)
		printf("The day of the week is Wednesday.\n");
	if(dayWeek==4)
		printf("The day of the week is Thursday.\n");
	if(dayWeek==5)
		printf("The day of the week is Friday.\n");
	if(dayWeek==6)
		printf("The day of the week is Saturday.\n");
	if(dayWeek==7)
		printf("The day of the week is Sunday.\n");
	if(dayWeek>7)
		printf("There's no such day: %d. Input value must be from 1 to 7.\n", dayWeek);
	if(dayWeek<=0)
		printf("Invalid number. Input value must be from 1 to 7\n.");
	return 0;
}

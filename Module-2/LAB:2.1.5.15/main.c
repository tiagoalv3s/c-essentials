/*
- Scenario:
	Write a program which records two float values. 
	Next, print the sum, the difference and the result of the multiplication of these two values.
	Your version of the program must print the same result as the expected output.
- Sample output:
	Value A: 5.5
	Value B: 5.6
	5.500000 + 5.600000 = 11.100000.
	5.500000 - 5.600000 = -0.100000.
	5.500000 * 5.600000 = 30.799999.
*/

#include <stdio.h>

int main()
{
	float valueA, valueB;
	printf("Please type in A value: \n");
	scanf("%f", &valueA);
	printf("Please type in B value: \n");
	scanf("%f", &valueB);

	printf("%f + %f = %f.\n", valueA, valueB, valueA + valueB);
	printf("%f - %f = %f.\n", valueA, valueB, valueA - valueB);
	printf("%f * %f = %f.\n", valueA, valueB, valueA * valueB);
	return 0;
}	

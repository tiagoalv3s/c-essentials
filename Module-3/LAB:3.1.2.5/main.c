#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int number1, number2, number3, number4;
	
	printf("Enter first number\n");
	scanf("%d", &number1);
	printf("Enter second number\n");
	scanf("%d", &number2);
	printf("Enter third number\n");
	scanf("%d", &number3);
	printf("Enter fourth number\n");
	scanf("%d", &number4);
 	
	if (number1	>= 0 && number1 <= 255 &&
		number2	>= 0 && number2 <= 255 &&
		number3	>= 0 && number3 <= 255 &&
		number4	>= 0 && number4 <= 255)
	{
		unsigned long int ipAddress32Bit = 0;
		ipAddress32Bit += number1 * 256 * 256 * 256;
		ipAddress32Bit += number2 * 256 * 256;
		ipAddress32Bit += number3 * 256;
		ipAddress32Bit += number4;
		printf("Human-readable IP address is: %d.%d.%d.%d\n", number1, number2, number3, number4);
		printf("IP address as a 32-bit number is: %lu\n", ipAddress32Bit);
	}
	else
	{
		printf("Incorrect IP Address.");
	}
	
	return 0;
}

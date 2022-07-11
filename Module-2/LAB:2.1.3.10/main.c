#include <stdio.h>

int main()
{
    char zero = '0';
	int digits = '1';
	printf("\n\'%c\' - \'%c\' is: %d\n", digits, zero, digits - zero);
	++digits;
    printf("\'%c\' - \'%c\' is: %d\n", digits, zero, digits - zero);
    ++digits;
    printf("\'%c\' - \'%c\' is: %d\n", digits, zero, digits - zero);
    ++digits;
    printf("\'%c\' - \'%c\' is: %d\n", digits, zero, digits - zero);
    ++digits;
    printf("\'%c\' - \'%c\' is: %d\n", digits, zero, digits - zero);
    ++digits;
    printf("\'%c\' - \'%c\' is: %d\n", digits, zero, digits - zero);
    ++digits;
    printf("\'%c\' - \'%c\' is: %d\n", digits, zero, digits - zero);
    ++digits;
    printf("\'%c\' - \'%c\' is: %d\n", digits, zero, digits - zero);
    ++digits;
    printf("\'%c\' - \'%c\' is: %d\n", digits, zero, digits - zero);
    digits-= 9;
    printf("\'%c\' - \'%c\' is: %d\n\n", digits, zero, digits - zero);
	return 0;
}
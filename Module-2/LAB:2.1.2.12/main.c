/*
-Expected output:
    The value of half is: 0.500000
    The value of Pi is: 3.141593
*/
#include <stdio.h>

int main()
{
    float halfValue = 0.6 - 0.1;
    float piValue = 0.141592 + 0.000001;
    printf("\nThe value of half is: %f", halfValue);
    printf("\nThe value of Pi is: %f\n", piValue);
    return 0;
}
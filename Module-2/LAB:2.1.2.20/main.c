/*
- Expected output:
    the result is: 4
    the small result is: 7
*/
#include <stdio.h>

int main()
{
    int xValue = 5;
    int yValue = 3;
    int result = (xValue % yValue) * (14 % yValue);
    int smallResult = xValue + 10 % 4 % xValue;
    printf("the result is: %d\n", result);
    printf("the small result is: %d\n", smallResult);
    return 0;
}
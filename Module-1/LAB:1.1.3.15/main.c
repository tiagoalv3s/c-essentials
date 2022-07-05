/*
- Scenario:
    Check the program in the editor. Find all possible compilation errors and logic errors. Fix them.
    Your version of the program must print the same result as the expected output. 
    Before you use the compiler, try to find the errors only by manual code analysis. 
    Remember to find the logic errors (check the order of the months).
    If you want to improve the variable names, then do so, but remember that variable names have to be as descriptive and shor as possible.
- Expected output:
    A leap year:
    Days in the first half of the current year: 182
    Days in the second half of the current year: 184
    Days in the current year: 366
    
    An ordinary year:
    Days in the first half of the current year: 181
    Days in the second half of the current year: 184
Days in the current year: 365
*/

#include <stdio.h>

int main()
{
    int daysInCurrentFebruary = 28;
    int daysInJanuary = 31;
    int daysInFebruary = daysInCurrentFebruary;
    int daysInMarch = 31;
    int daysInApril = 30;
    int daysInMay = 31;
    int daysInJune = 30;
    int daysInJuly = 31;
    int daysInAugust = 31;
    int daysInSeptember = 30;
    int daysInOctober = 31;
    int daysInNovember = 30;
    int daysInDecember = 31;

    int daysInFirstHalf = daysInJanuary + daysInFebruary + daysInMarch + daysInApril + daysInMay + daysInJune;
    int daysInSecondHalf = daysInJuly + daysInAugust + daysInSeptember + daysInOctober + daysInNovember + daysInDecember;

    printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
    printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
    printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);
    return 0;
}

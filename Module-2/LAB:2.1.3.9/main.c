#include <stdio.h>

int main()
{
    char firstLetter = 'A';
    char firstSmallLetter = 'a';
    char lastLetter = 'Z';
    char lastSmallLetter = 'z';
    printf("Uppercase letters between(and with) \'%c' and \'%c' is: %d\n", lastLetter, firstLetter, lastLetter - firstLetter + 1);
    printf("Uppercase letters between(and with) \'%c' and \'%c' is: %d\n", lastSmallLetter, firstSmallLetter, lastSmallLetter - firstSmallLetter + 1);
    return 0;
}
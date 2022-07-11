#include <stdio.h>

int main()
{
    char c = 'c';
    char a = 'a';
    printf("Diff between \'%c' and \'%c' is: %d\n", c, a, c - a);
    printf("Diff between \'%c' and \'%c' is: %d\n", a, c, a - c);
    return 0;
}
#include <stdio.h>

int main()
{
    int day = 20;
    int month =02;
    int month1 = 2;
    int year = 2016;
    printf("%d-%02d-%d - YYYY-MM-DD format - ISO 8601\n", year, month, day);
    printf("%02d-%d-%d - MM-DD-YYYY format\n", month, day, year);
    printf("%d-%02d-%d - DD-MM-YYYY format\n", day, month, year);
    printf("%d-%d-%d - D-M-Y format\n", day, month1, year);
    return 0;
}
/*
- Scenario:
Write a program which computes and prints the sum of the days in all four quarters of the current year. 
Use variables to store these four values.
You can use the code from the previous lab, but you will learn more if you write it from scratch.

Expected output
A leap year:
Days in Q1 of the current year: 91
Days in Q2 of the current year: 91
Days in Q3 of the current year: 92
Days in Q4 of the current year: 92

An ordinary year:
Days in Q1 of the current year: 90
Days in Q2 of the current year: 91
Days in Q3 of the current year: 92
Days in Q4 of the current year: 92
*/

#include <stdio.h>

int main()
{
    int january = 31;
    int februaryLeap = 29;
    int februaryOrdinary = 28; 
    int march = 31;
    int april = 30;
    int may = 31;
    int june = 30;
    int july = 31;
    int august = 31;
    int september = 30;
    int october = 31;
    int november = 30;
    int december = 31;
    
    int q1 = january + februaryLeap + februaryOrdinary + march;
    int q2 = april + may + june;
    int q3 = july + august + september;
    int q4 = october + november + december;

    printf("\nA leap year:\nDays in Q1 of the leap year: %d\n", q1 - februaryOrdinary);
    printf("Days in Q2 of the leap year: %d\n", q2);
    printf("Days in Q3 of the leap year: %d\n", q3);
    printf("Days in Q4 of the leap year: %d\n", q4);
    printf("\nAn ordinary year:\nDays in Q1 of the ordinary year: %d\n", q1 - februaryLeap);
    printf("Days in Q2 of the ordinary year: %d\n", q2);
    printf("Days in Q3 of the ordinary year: %d\n", q3);
    printf("Days in Q4 of the ordinary year: %d\n", q4);
    return 0;
}

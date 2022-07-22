#include <stdio.h>

int main()
{
    float fNumber = 0;
    int iNumber = 0;

    printf("Please type in a fractional number: \n");
    scanf("%f"  , &fNumber);
    iNumber=fNumber;

    if( iNumber>=1 && iNumber<2){
        printf("\nVery bad\n");
    }
    else if(iNumber>=2 && iNumber<3){
        printf("\nBad\n");
    }
    else if(iNumber>=3 && iNumber<4){
        printf("\nNeutral\n");
    }
    else if(iNumber>=4 && iNumber<5){
        printf("\nGood\n");
    }
    else if(iNumber>=5 && iNumber<6){
        printf("\nVery good\n");
    }
    else{
        printf(" ");
    }
    return 0;
}
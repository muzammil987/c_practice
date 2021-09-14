#include<stdio.h>
#include<string.h>

int main(){

    int dividend, divisor, quotient, remainder;
    printf("enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend/divisor;
    remainder = dividend%divisor;

    printf("quotient = %d\n remainder = %d", quotient, remainder);

     return 0;
}

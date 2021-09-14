#include<stdio.h>

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if(number < 0){
        printf("the number you entered is negative");
    }

    else{
        printf("The number you entered is positive");
    }
    return 0;
}

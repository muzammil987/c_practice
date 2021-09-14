#include<stdio.h>
#include<string.h>

int main(){
    int number;
    printf("Enter the you entered number: ");
    scanf("%d", &number);

    if(number < 0){
        printf("The number is negetive");
    }

    if(number > 0){
        printf("The number you entered is positive");
    }

    return 0;


}

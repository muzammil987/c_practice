#include<stdio.h>

int main(){
    int num1, num2, sum, sub1,a;
    printf("enter 1 for aadition enter 2 for subtraction");
    scanf("%d", &a);
    printf("enter the two values:\n");
    scanf("%d %d", &num1, &num2);
    if(a == 1){
        sum = add(num1,num2);
        printf("addition = %d",sum);
    }
    if(a==2){
        sub1 = sub(num1,num2);
        printf("sub = %d", sub1);
    }
    else if(a>2)
        printf("entered number is not in the range specified");
}
int add(int a, int b){
    int result;
    result = a + b;
    return result;
}
int sub(int a, int b){
    int result;
    result = a - b;
    return result;
}

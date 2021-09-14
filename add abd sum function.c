#include<stdio.h>

int main(){
    int num1, num2, sum, subtract;
    printf("enter two values:\n");
    scanf("%d %d", &num1, &num2);
    sum = add(num1,num2);
    subtract = sub(num1,num2);

    printf("sub = %d\n subtract = %d",sum, subtract);

    return 0;
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

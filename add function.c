#include<stdio.h>

int main(){
    int num1, num2, sum;
    printf("Enter the two values:\n");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);
    printf("sum = %d", sum);

    return 0;
}
int add(int a, int b){
    int add;
    add = a + b;
    return add;
}

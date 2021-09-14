#include<stdio.h>
#include<string.h>

int main(){
    int a = 55;
    int *b;
    b = &a;


       printf("value of a = %d\n", a);
    printf("address of a = %d", b);

    return 0;

}

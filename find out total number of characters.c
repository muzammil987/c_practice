#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int a;

    printf("Enter the string: ");
    scanf("%s", &str);

    a = strlen(str);
    printf("length of character is %d", a);

    return 0;


}

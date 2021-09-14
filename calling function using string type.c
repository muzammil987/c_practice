#include<stdio.h>
void display(char ch[]);
int main(){
       char c[50];
       printf("enter string: ");
       gets(c);
       display(c);     //passing string c to function.
       return 0;
}
void display(char ch[]){
    printf("string outputs: ");
    puts(ch);
}

#include<stdio.h>

int main(){

   int a, b;

   printf("Enter a =\n");
   scanf("%d", &a);
   printf("Enter b =\n");
   scanf("%d", &b);


   a = a + b;
   b = a - b;
   a = a - b;

   printf("a =%d\n b =%d", a, b);
   return 0;

}

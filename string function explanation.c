#include<stdio.h>
#include<string.h>

int main(){
     char str1[12] = "Hello";
     char str2[12] = "World";
     char str3[12];
     int   len ;


     strcpy(str3, str1);
     printf("strcpy str3 :  %s\n", str3 );

     strcat(str1, str2);
     printf("strcat :  %s\n", str1 );
     len = strlen(str1);
     printf("strlen :  %d", len );

     return 0;

}

#include<stdio.h>

int main(){

 char first_name[10];
 char last_name[10];

     printf("Enter the first name\n ");
     scanf("%s", &first_name);
     printf("Enter the last name\n");
     scanf("%S", &last_name);
     printf("The name of person is %s %S",first_name,last_name);

    return 0;
}





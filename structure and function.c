#include<stdio.h>
struct student{
    char name[50];
    int roll;
};
void display(struct student stu);
/*function prototype should be below to the structure declaration otherwise compiler show error */
int main(){
    struct student s1;
    printf("enter student's name: ");
    scanf("%s",&s1.name);
    printf("enter roll number: ");
    scanf("%d",&s1.roll);
    display(s1);  //passing structure variable as argument
    return 0;
}
void display(struct student stu){
    printf("Output\nName: %s",stu.name);
    printf("\nRoll: %d",stu.roll);
}

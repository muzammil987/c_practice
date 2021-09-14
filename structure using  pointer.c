#include<stdio.h>
#include<string.h>

struct student
{
        int id;
        char name[20];
        float percentage;
};

int main()
{
                    //Initializing to null


         struct student record = {1,"john",90.5};
         struct student *ptr;
         ptr = &record;

        printf("id is: %d \n", ptr-> id);
        printf("name is: %s \n", ptr->name);
        printf("percentage is; %f \n", ptr->percentage);
        return 0;
}

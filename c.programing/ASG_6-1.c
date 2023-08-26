/*Create a data base for 5 students in a school using array of structs,
each struct contain 4 members:
Student name
Student age
Student degree
Student section
Fill the data inside main function and print it*/



#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int age;
    int degree;
    int section;


} arr[5];


int main()
{
    for (int i=0;i<5;i++)
    {
        printf("Enter name of student %d: ",i+1);
        scanf("%s",arr[i].name);

         printf("Enter the age of student %d: ",i+1);
        scanf("%d",&arr[i].age);

         printf("Enter the degree of student %d: ",i+1);
        scanf("%d",&arr[i].degree);

         printf("Enter the section of student %d: ",i+1);
        scanf("%d",&arr[i].section);

        printf("\n\n");
    }


    printf(" \n\n Name \t        age \t degree\tsection");


     for (int i=0;i<5;i++)
    {
        printf("\n %s   \t %d  \t  %d    \t   %d \n",arr[i].name,arr[i].age,arr[i].degree,arr[i].section);
    }


    return 0;
}


/*write a program that take a number from the user using scanf ,
 if the number was even print the following two sentences:
 "The number is odd = 0"
 "the number is even = 1"
  And if the number was odd print the following two sentences:
 "The number is odd = 1"
 "the number is even = 0"
 */



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    printf("Enter number \t");
    scanf("%d",&x);

    if((x/2)*2==x){
        printf("\nThe number is odd = 0\n");
        printf("The number is even = 1\n");
    }
    else {
        printf("\nThe number is odd = 1\n");
        printf("The number is even = 0\n");

    }






    return 0;
}

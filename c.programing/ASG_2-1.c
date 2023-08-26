/* implement a calculator program that asks the user to enter a mathematical operator [+,-,*,/]
then enter number_1 and number_2 and display the result
+point ( enter number_1 first then the operator then number_2)   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;
    char op;

    printf("Enter number_1 \n");
    scanf("%d",&x);

    printf("Enter the operator (+,-,*,/) \n");
    scanf(" %c",&op);

    printf("Enter number_2 \n");
    scanf("%d",&y);

    switch(op)
    {

    case '+':
    {
        printf("The result : \n");
        printf("%d + %d = %d",x,y,x+y);
    }
    break;


    case '-':
    {
        printf("The result : \n");
        printf("%d - %d = %d",x,y,x-y);
    }
    break;

    case '*':
    {
        printf("The result : \n");
        printf("%d * %d = %d",x,y,x*y);
    }
    break;


    case '/':
        if (x==0&&y!=0)
        {
            printf("The result : \n");
            printf("\n%d / %d = %d",x,y,x/y);
        }
        else if (x!=0&&y==0)
        {
            printf("The result : \n");
            printf("\ncan not be divided on 0");
            printf("\n%d / %d = %d",y,x,y/x);

        }
        else if (x==0&&y==0)
        {
            printf("The result : \n");
            printf("\n%d / %d = ",x,y);
            printf("un defined ");
        }
        else
        {
            float z = x/(float)y;
            printf("The result : \n");
            printf("\n%d / %d = %.2f",x,y,z);
        }
        break;



    default:
    {
        printf("Error your operator is Wrong please try again ");
    }


    }
    return 0;
}

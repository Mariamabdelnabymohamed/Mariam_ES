#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0;
    int num2=1;
    int num3;
    int number;
    int i;

    printf("Enter number of elements");
    scanf("%d",&number);
    printf("\n%d\t%d\t",num1,num2);
    for (i=2;i<number;++i)
    {
        num3=num1+num2;
        printf("%d\t",num3);
        num1=num2;
        num2=num3;
    }

    return 0;
}

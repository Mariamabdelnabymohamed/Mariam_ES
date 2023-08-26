#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter 5 numbers :\n");
    int arr[5];
    for (int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("original array :    ");
    for (int i=0; i<5; i++)
    {
        printf("%d     ",arr[i]);
    }

    printf("\nReverse of array :  ");
    for (int j=4; j>=0; j--)
    {
        printf("%d     ",arr[j]);
    }



    return 0;
}

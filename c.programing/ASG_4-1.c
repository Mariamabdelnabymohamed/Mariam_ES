#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Enter the value of x ");
    scanf("%d",&x);

    printf("before calling edit x=%d\n",x);

    edit(&x);

    printf("after calling edit x=%d \n",x);

    return 0;
}

void edit(int *ptr)
{
    (*ptr)++;


}



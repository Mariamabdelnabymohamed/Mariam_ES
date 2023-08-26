/*write a program to check if a given number is an Armstrong Number?*/


#include <stdio.h>
#include <stdlib.h>

float func_power (int x,int z);
int result=1;
int res=0;

int main()
{
    int result=1;

    int number =0;
    printf("Enter Number to check if it an armstrong number or not : \n");
    scanf("%d",&number);
    int n=0;
    int r=0;
    int num=0;

    for (num=number  ; num>0 ; ++n)
    {
        num=num/10;
    }

    for ( num=number ; num>0 ; num=num/10)
    {
        r=num%10;
        func_power(r,n);

    }


    if (res==number)
    {
        printf("%d is an armstrong number",number);
    }
    else
    {
        printf("%d is not an armstrong number",number);
    }

    return 0;
}
float  func_power (int x, int z )
{
    int result =1;
    while (z>=1)
    {
        result =x*result;
        z--;
    }
    res=res+result;
    return res;


}



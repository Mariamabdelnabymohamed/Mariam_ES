#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max,min,maxpos,minpos;
    printf("Enter 5 numbers :\n");
    int arr_1[5];
    for (int i=0; i<5; i++)
    {
        scanf("%d",&arr_1[i]);
    }

    	for( int i=0; i<4; i++)//i<n-1
	{
		for ( int j=0; j<4-i; j++)//j<n-1-i
		{
			if (arr_1[j]>arr_1[j+1])
			{
				int swap=arr_1[j];
				arr_1[j]=arr_1[j+1];
				arr_1[j+1]=swap;
			}
		}
	}

    printf("the array :    ");
    for (int i=0; i<5; i++)
    {
        printf("%d     ",arr_1[i]);
    }

    min=arr_1[0];
    for (int i=0; i<5; i++)
    {

        if (arr_1[i]>arr_1[i+1])
        {
            max=arr_1[i];
            maxpos=i;
        }

    }

    for (int j=0;j<5;j++)
    {

        if (arr_1[j]<=min)
        {
            min=arr_1[j];
            minpos=j;

        }

    }
    printf("\nthe maximum number in arr_1 is : %d  in position : %d",max,maxpos);
    printf("\nthe minimum number in arr_1 is : %d  in position : %d",min,minpos);




    return 0;
}

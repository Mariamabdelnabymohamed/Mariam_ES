/* write a program to input any number from user and toggle or invert nth bit
of the given number using bitwise operator */


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num=0; //the number that will be taken from user
   int tog=0; // number of bits that the number on it will be toggled

   printf("Enter number : ");
   scanf("%d",&num); // taking the number from user

   printf("\nEnter nth bit to toggle (from 0 to 31) : ");
   scanf("%d",&tog); //taking number of bits from user

   printf("\nBit toggled successfully \n\n");

   printf("Number before toggling %d bit is : %d \n\n",tog ,num);

   int nnum = num ^ (1<< (tog)); //toggling the number on the bit that was taken from user

   printf("Number after toggling %d bit is : %d \n",tog ,nnum);

   return 0;
}

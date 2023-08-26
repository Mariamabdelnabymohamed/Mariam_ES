#include <stdio.h>
#include <stdlib.h>

struct complex
{
    float real;
    float imaginary;
};

int main()
{

    struct complex c1, c2, addition;


    printf("For 1st complex number :\n");
    printf("Enter real and imaginary parts of first complex number respectively:\n");
    scanf("%f%f", &c1.real, &c1.imaginary);


    printf("\nFor 2nd complex number :\n");

    printf("Enter real and imaginary part of second complex number respectively:\n");
    scanf("%f%f", &c2.real,&c2.imaginary);


    addition.real = c1.real + c2.real;
    addition.imaginary = c1.imaginary + c2.imaginary;

    printf("\nSUM = %0.1f + %0.1f i\n\n", addition.real, addition.imaginary);

    return 0;
}

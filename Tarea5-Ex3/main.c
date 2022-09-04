#include <stdio.h>
#include <stdlib.h>

int main()
{
    float side1,side2,side3;
    printf("Enter side 1 of the triangle\n");
    scanf("%f",&side1);
    printf("Enter side 2 of the triangle\n");
    scanf("%f",&side2);
    printf("Enter side 3 of the triangle\n");
    scanf("%f",&side3);
    if(side1==side2 && side1==side3)
    {
        printf("These measures belong to a equilateral triangle");
    }
    if((side1==side2 ||side1==side3)&&(side1!=side2||side1!=side3))
    {
        printf("These measures belong to a isoceles triangle");
    }
    if((side1!=side2 ||side1==side3)&&(side2!=side2||side2!=side3)&&(side3!=side1||side3!=side2))
    {
        printf("These measures belong to a scalene triangle ");
    }
}

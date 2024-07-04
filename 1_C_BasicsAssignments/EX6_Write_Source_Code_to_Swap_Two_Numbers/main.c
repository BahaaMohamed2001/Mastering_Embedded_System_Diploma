#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Num1,Num2;
    printf("Enter the value of a: ");
    scanf("%f",&Num1);
    printf("Enter the value of b: ");
    scanf("%f",&Num2);
    float Num3;
    Num3=Num1+Num2;
    Num1=Num3-Num1;
    Num2=Num3-Num2;
    printf("After swapping, value of a = %f\n",Num1);
    printf("After swapping, value of b = %f\n",Num2);
    return 0;
}

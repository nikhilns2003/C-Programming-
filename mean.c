#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);

    printf("Arithmatic mean is : %f\nHarmonic mean : %f",(a+b)/2,(a*b)/(a+b));
    return 0;
}
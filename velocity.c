#include<stdio.h>
int main()
{
    float u,a,t;
    printf("Enter initial velocity : ");
    scanf("%f",&u);
    printf("Enter acceleration : ");
    scanf("%f",&a);
    printf("Enter time : ");
    scanf("%f",&t);

    printf("Velocity : %f\n",u + (a*t));
    printf("Distance : %f",u + (a*t*t));
    return 0;
}
#include<stdio.h>
int main()
{
    int r,h;
    printf("Enter cylinder radius and hight : ");
    scanf("%d%d",&r,&h);

    printf("Surface area of Cylinder : %f\nVolume of Cylinder : %f",2*3.14*(r*r)+2*3.14*r*h,3.14*(r*r)*(h));
    
}
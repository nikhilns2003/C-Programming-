#include<stdio.h>
int main()
{   
    int l,b,h;
    printf("Enter the Length : ");
    scanf("%d",&l);
    printf("Enter the breadth : ");
    scanf("%d",&b);
    printf("Enter the height : ");
    scanf("%d",&h);

    printf("Surface Area = %d\n",2*((l*b)+(l*h)+(b*h)));
    printf("Volume = %d",l*b*h);
    return 0;
}
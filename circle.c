#include <stdio.h>
int main()
{
    int r;
    printf("Enter the radius of circle : ");
    scanf("%d", &r);

    printf("Area of Circle is %f\n", 3.14 * (r * r));
    printf("Area of Circumference is %f", (3.14) * (2) * (r));

    return 0;
}
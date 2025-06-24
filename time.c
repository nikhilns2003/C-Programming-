#include <stdio.h>
int main()
{
    int H, M, S;
    printf("Enter Hourse");
    scanf("%d", &H);
    printf("Enter Mintes");
    scanf("%d", &M);
    printf("Enter Second");
    scanf("%d", &S);

    if (H >= 0 && H <= 24)
    {
        if (M >= 0 && M < 60)
        {
            if (S >= 0 && M < 60)
            {
                printf("Time is valid");
            }
            else
            {
                printf("Time is invalid");
            }
            else
            {
                printf("the second is invalid");
            }
            else
            {
                printf("the minutes is invslid");
            }
            return 0;
        }
    }
}        
#include <stdio.h>
int main()
{
    // accept month no from user and display no of days present in that month/
    // ex: input - 1            2           4
    //    output - 31 days      28 days     30 days

    int mno;
    printf("Enter Month number: ");
    scanf("%d", &mno);

    switch (mno)
    {
    case 1:
        printf("31 Days");
        break;
    case 2:
        printf("28/29 Days");
        break;
    case 3:
        printf("30 Days");
        break;
    case 4:
        printf("31 Days");
        break;
    case 5:
        printf("30 Days");
        break;
    case 6:
        printf("31 Days");
        break;
    case 7:
        printf("30 Days");
        break;
    case 8:
        printf("31 Days");
        break;
    case 91:
        printf("30 Days");
        break;
    case 10:
        printf("31 Days");
        break;
    case 11:
        printf("30 Days");
        break;
    case 12:
        printf("31 Days");
        break;
    default:
        printf("Invalid Month Number");
    }
    return 0;
}
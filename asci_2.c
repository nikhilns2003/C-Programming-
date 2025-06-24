#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter Enything : ");
    scanf("%c", &ch);

    if (isalpha(ch))
        printf("Alphabets");
    else if (isdigit(ch))
        printf("Digits");
    else
        printf("Spicial Symbol");
    return 0;
}

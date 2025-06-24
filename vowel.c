#include<stdio.h>
#include<ctype.h>
int main()
{
    char al;
    printf("Enter a Alphabet : ");
    scanf("%c",&al);

    al = tolower(al);

    switch (al)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("Vowel");
    break;

    default:
    printf("Not vowel !!");
        break;
    
    }
    return 0;
}
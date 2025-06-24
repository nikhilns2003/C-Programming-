#include <stdio.h>
int main()
{
    char a;

    printf("Enter Enything : ");
    scanf("%c", &a);

    if ((a >= 65 && a  <= 90) || (a >= 97 && a <= 122)){
        printf("Alphabets");}

    else if (a >= 48 && a <= 57){
        printf("Digits");}

    else{
        printf("Spicial Symbol");}
    return 0;
}
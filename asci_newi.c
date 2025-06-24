#include <stdio.h>
int main()
{
    // --------Not use ASCII---- Use single '' use------
    char a;

    printf("Enter Enything : ");
    scanf("%c", &a);

    if ((a >= 'A' && a  <= 'Z') || (a >= 'a' && a <= 'z')){
        printf("Alphabets");}

    else if (a >= '0' && a <= '9'){
        printf("Digits");}

    else{
        printf("Spicial Symbol");}
    return 0;
}


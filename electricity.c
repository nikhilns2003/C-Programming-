#include <stdio.h>
int main()
{
    float amt = 0;
    int units;
    printf("Enter Units : ");
    scanf("%d", &units);

    if (units >= 100)
    {
        amt = 100 * 8;
        units = units - 100;
        if (units >= 100)
        {
            amt = amt + (100 * 10);
            units = units - 100;
            if (units >= 100)
            {
                amt = amt + (100 * 12);
                units = units - 100;
                if (units >= 100)
                {
                    amt = amt + (100 * 15);
                    units = units - 100;
                    if (units > 0)
                        amt = amt + (units * 17);
                }
                else
                    amt = amt + (units * 15);
            }
            else
                amt = amt + (units * 12);
        }
        else
            amt = amt + (units * 10);
    }
    else
        amt = amt + (units * 8);

    printf("Amount is %2.f", amt);

    return 0;
}
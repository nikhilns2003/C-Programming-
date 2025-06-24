#include<stdio.h>
int main()
{
    int Qty1,Qty2,Qty3;
    float Rate1,Rate2,Rate3;
    float Total_amount,Discount_amount,Amount_pay;

    printf("Enter product Qty1:");
    scanf("%d",&Qty1);
    printf("Enter product Rate1:");
    scanf("%F",&Rate1);
    
    printf("\nEnter product Qty2:");
    scanf("%d",&Qty2);
    printf("Enter product Rate2:");
    scanf("%F",&Rate2);
    
    printf("\nEnter product Qty3:");
    scanf("%d",&Qty3);
    printf("Enter product Rate3:");
    scanf("%F",&Rate3);

    Total_amount = (Qty1*Rate1)+(Qty2*Rate2)+(Qty3*Rate3);

    if (Total_amount > 1000)
    {
        Discount_amount = 0.10*Total_amount;
    }else if (Total_amount > 700)
    {
        Discount_amount = 0.07*Total_amount;
    }else if (Total_amount > 500)
    {
        Discount_amount = 0.03*Total_amount;
    }

    Amount_pay = Total_amount - Discount_amount;

    printf("\nTotal Amount of product:%.2f",Total_amount);
    printf("\nDiscounted Amount of prod:%.2f",Discount_amount);
    printf("\nPay Amount:%.2f",Amount_pay);
    
    
    

    return 0;
}
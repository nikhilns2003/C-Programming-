#include <stdio.h>

    int main() {
        int qty1, qty2, qty3;
        float rate1, rate2, rate3;
        char prod1[10],prod2[10],prod3[10];
        float amt1, amt2, amt3, total, discount = 0, netAmount;
        int percent;
        int id = 1, pid1,pid2,pid3;
       
        printf("Enter quantity and rate for item 1: ");
        pid1 = id++;
        scanf("%s %d %f",&prod1, &qty1, &rate1);

        printf("Enter quantity and rate for item 2: ");
        pid2= id++;
        scanf("%s %d %f",&prod2, &qty2, &rate2);

        printf("Enter quantity and rate for item 3: ");
        pid3=id++;
        scanf("%s %d %f",&prod3, &qty3, &rate3);

        // printf("Enter the discout rate : ");
        // scanf("%d",&percent);

        
        amt1 = qty1 * rate1;
        amt2 = qty2 * rate2;
        amt3 = qty3 * rate3;
        total = amt1 + amt2 + amt3;

        // discount = percent*total/100;

        if (total > 5000) {
            discount = total * 0.20;
        } else if (total > 3000) {
            discount = total * 0.15;
        } else if (total > 1000) {
            discount = total * 0.10;
        } else {
            discount = 0;
        }

        netAmount = total - discount;

        printf("\nTotal Amount: %.2f", total);
        printf("\nDiscount: %.2f", discount);
        printf("\nNet Payable Amount: %.2f\n", netAmount);

        printf("|n-------------------------------------------------------");
        printf("\n|   ID   |     Name     |  Price  |  Qty  |   Total   |");
        printf("\n-------------------------------------------------------");
        printf("\n|%8d,%14s,%9f,%7d,%11f",pid1,prod1,rate1,qty1,amt1);
        printf("\n|%8d,%14s,%9f,%7d,%11f",pid2,prod2,rate2,qty2,amt2);
        printf("\n|%8d,%14s,%9f,%7d,%11f",pid3,prod3,rate3,qty3,amt3);
        printf("\n-------------------------------------------------------");

        printf("\n\t\t\t Total Amount      : %.2f",total);
        printf("\n\t\t\t Discount          : %.2f",discount);
        printf("\n\t\t\t Payable amount    : %.2f",netAmount);




        return 0;
    }
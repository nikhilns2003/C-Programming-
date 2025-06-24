#include <stdio.h>

int main() {
    int qty1, qty2, qty3;
    float rate1, rate2, rate3;
    float amount, discount = 0.0, netAmount;

    // Input for item 1
    printf("Enter quantity and rate for item 1: ");
    scanf("%d %f", &qty1, &rate1);

    // Input for item 2
    printf("Enter quantity and rate for item 2: ");
    scanf("%d %f", &qty2, &rate2);

    // Input for item 3
    printf("Enter quantity and rate for item 3: ");
    scanf("%d %f", &qty3, &rate3);

    // Calculate total amount
    amount = (qty1 * rate1) + (qty2 * rate2) + (qty3 * rate3);

    // Calculate discount
    if (amount > 1000) {
        discount = 0.20 * amount;
    } else if (amount > 750) {
        discount = 0.15 * amount;
    } else if (amount > 500) {
        discount = 0.08 * amount;
    }

    // Net amount
    netAmount = amount - discount;

    // Display results
    printf("\nTotal Amount: %.2f", amount);
    printf("\nDiscount: %.2f", discount);
    printf("\nNet Amount to be paid: %.2f\n", netAmount);

    return 0;
}
// ex8 from the chapter2

#include <stdio.h>

int main(void) {
    float amount = 0, interestRate = 0, monthlyPayment = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    // convert to percentages and to IR per month
    interestRate /= 100 * 12;

    float balanceAfterFirst = amount - monthlyPayment + amount * interestRate;
    float balanceAfterSecond = balanceAfterFirst - monthlyPayment
     + balanceAfterFirst * interestRate;
    float balanceAfterThird = balanceAfterSecond - monthlyPayment
     + balanceAfterSecond * interestRate;

    printf("Balance remaining after first payment: $%.2f\n", balanceAfterFirst);
    printf("Balance remaining after second payment: $%.2f\n", balanceAfterSecond);
    printf("Balance remaining after third payment: $%.2f\n", balanceAfterThird);

    return 0;
}
// ex4 from the chapter 2
// calculate a tax from the given value

#include <stdio.h>

#define TAX_VALUE 0.05f

int main(void) {
    float orig = 0;

    printf("Enter an amount: ");
    scanf("%f", &orig);

    printf("With tax added: $%.2f\n", (1 + TAX_VALUE) * orig);

    return 0;
}
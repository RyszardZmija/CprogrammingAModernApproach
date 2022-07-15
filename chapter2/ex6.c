// ex6 from the chapter 2

#include <stdio.h>

int main(void) {
    float x = 0;

    printf("Enter the value for x: ");
    
    // pass the address of x
    scanf("%f", &x);

    float result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The result is: %f", result);

    return 0;
}
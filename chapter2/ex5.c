// ex5 from the chapter 2
// we could use repeated multiplication but
// in the real world we wouldn't, it's better to use math.h library

#include <stdio.h>
#include <math.h>

int main(void) {
    float x = 0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    float result = 3 * powf(x, 5) + 2 * powf(x, 4)
     - 5 * powf(x, 3) - powf(x, 2) + 7 * x - 6;

    printf("The result is: %f", result);

    return 0;
}
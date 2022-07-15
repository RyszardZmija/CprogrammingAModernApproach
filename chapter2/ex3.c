// ex3: modification of the program from ex2

#include <stdio.h>

#define PI 3.141592F

int main(void) {
    float radius = 0;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // literal 3 is promoted to float and floating-point division is
    // performed (promotion to preserve precision)
    float volume = 4.0f / 3 * PI * radius * radius * radius;

    printf("The volume of the sphere equals %.3f\n", volume);

    return 0;
}
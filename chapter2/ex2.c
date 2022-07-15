// ex2 from the chapter 2

#include <stdio.h>

#define PI 3.141592f

int main(void) {
    float radius = 10;
    float volume = 4.0f / 3.0f * PI *
     radius * radius * radius;

    printf("The volume of a sphere with radius 10m is %.3f m3\n", volume);

    return 0;
}
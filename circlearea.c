#include <stdio.h>

#define PI 3.14159
void circlearea() {
    float radius, area;

    // Prompt user for input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Display the result formatted to 2 decimal places
    printf("Area of the circle = %.2f\n", area);

   //return 0;
}

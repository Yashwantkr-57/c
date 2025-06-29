#include <stdio.h>
#define PI 3.14

// Function to calculate rectangle area
float rectangle() {
    float l, b;
    printf("Enter l and b of rectangle: ");
    scanf("%f %f", &l, &b);
    return l * b;
}

// Function to calculate circle area
float circle() {
    float radius;
    printf("Enter r of circle: ");
    scanf("%f", &radius);
    return PI * radius * radius;
}

// Function to calculate cone surface area
float cone() {
    float radius, s_height;
    printf("Enter r and s_height of cone: ");
    scanf("%f %f", &radius, &s_height);
    return PI * radius * (radius + s_height);
}

// Main function to call and print results
int main() {
    float rect_area = rectangle();
    printf("Area of rectangle: %f\n", rect_area);

    float circ_area = circle();
    printf("Area of circle: %f\n", circ_area);

    float cone_area = cone();
    printf("Surface area of cone: %f\n", cone_area);

    return 0;
}

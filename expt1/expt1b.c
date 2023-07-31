#include <stdio.h>
#define pi 3.14159265

void main() {
    float rad,area;
    printf("Enter the radius:");
    scanf("%f",&rad);
    area = pi*rad*rad;
    printf("Area of the circle is %f\n",area);
}
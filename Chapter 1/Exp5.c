#include<stdio.h>

int main() {
    float l, b, r;
    printf("Enter the length, breadth, and radius: ");
    scanf("%f %f %f", &l, &b, &r);
    float m,n,o;
    m = l * b;
    n = 2 * (l + b);
    o = 2 * 3.14 * r;
    printf("Area of Rectangle: %f\n", m);
    printf("Perimeter of Rectangle: %f\n", n);
    printf("Circumference of Circle: %f\n", o);
    return 0;
}

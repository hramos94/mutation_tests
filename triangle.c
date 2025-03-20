#include <stdio.h>

const char* triangle_type(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return "Not a triangle";
    } else if (a == b && b == c) {
        return "Equilateral";
    } else if (a == b || b == c || a == c) {
        return "Isosceles";
    } else {
        return "Scalene";
    }
}

int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Triangle type: %s\n", triangle_type(a, b, c));
    
    return 0;
}
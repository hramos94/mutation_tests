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
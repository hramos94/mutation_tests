#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "triangle.h"

void test_equilateral()
{
    assert(strcmp(triangle_type(3, 3, 3), "Equilateral") == 0);
}

void test_isosceles()
{
    assert(strcmp(triangle_type(5, 5, 3), "Isosceles") == 0);
}

void test_scalene()
{
    assert(strcmp(triangle_type(3, 4, 5), "Scalene") == 0);
}

void test_not_a_triangle()
{
    assert(strcmp(triangle_type(1, 2, 3), "Not a triangle") == 0);
}

void test_degenerate_triangle()
{
    assert(strcmp(triangle_type(2, 2, 4), "Not a triangle") == 0);
}

int main()
{
    test_equilateral();
    test_isosceles();
    test_scalene();
    test_not_a_triangle();
    test_degenerate_triangle();

    return 0;
}
#include <gtest/gtest.h>
extern "C"
{
#include "triangle.h"
}

// Teste para um triângulo equilátero
TEST(TriangleTypeTest, Equilateral)
{
    EXPECT_STREQ(triangle_type(3, 3, 3), "Equilateral");
}

// Teste para um triângulo isósceles
TEST(TriangleTypeTest, Isosceles)
{
    EXPECT_STREQ(triangle_type(5, 5, 3), "Isosceles");
}

// Teste para um triângulo escaleno
TEST(TriangleTypeTest, Scalene)
{
    EXPECT_STREQ(triangle_type(3, 4, 5), "Scalene");
}

// Teste para um caso inválido (não forma um triângulo)
TEST(TriangleTypeTest, NotATriangle)
{
    EXPECT_STREQ(triangle_type(1, 2, 3), "Not a triangle");
}

// Teste para um caso limite de triângulo degenerado
TEST(TriangleTypeTest, DegenerateTriangle)
{
    EXPECT_STREQ(triangle_type(2, 2, 4), "Not a triangle");
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
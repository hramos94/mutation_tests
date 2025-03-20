#include <gtest/gtest.h>
extern "C"
{
#include "triangle.h"
}

TEST(TriangleTypeTest, Equilateral)
{
    EXPECT_STREQ(triangle_type(3, 3, 3), "Equilateral");
}

TEST(TriangleTypeTest, Isosceles)
{
    EXPECT_STREQ(triangle_type(5, 5, 3), "Isosceles");
}

TEST(TriangleTypeTest, Scalene)
{
    EXPECT_STREQ(triangle_type(3, 4, 5), "Scalene");
}

TEST(TriangleTypeTest, NotATriangle)
{
    EXPECT_STREQ(triangle_type(1, 2, 3), "Not a triangle");
}

TEST(TriangleTypeTest, DegenerateTriangle)
{
    EXPECT_STREQ(triangle_type(2, 2, 4), "Not a triangle");
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
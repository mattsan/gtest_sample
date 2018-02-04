#include <gtest/gtest.h>

#include "calc.h"

TEST(CalculationTest, Addition) {
    Calc calc;

    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST(CalculationTest, Multiplication) {
    Calc calc;

    EXPECT_EQ(calc.mul(2, 3), 6);
}

TEST(CalculationTest, MultiplicationNegative) {
    Calc calc;

    EXPECT_EQ(calc.mul(2, -3), -6);
}

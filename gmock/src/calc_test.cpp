#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "calc.h"
#include "adder.h"

using ::testing::Return;

class MockAdder : public Adder {
public:
    MOCK_METHOD2(add, int(int, int));
};

TEST(CalculationTest, Addition) {
    MockAdder adder;
    EXPECT_CALL(adder, add(2, 3)).WillRepeatedly(Return(5));

    Calc calc(adder);
    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST(CalculationTest, Multiplication) {
    MockAdder adder;
    EXPECT_CALL(adder, add(2, 2)).WillRepeatedly(Return(4));
    EXPECT_CALL(adder, add(4, 2)).WillRepeatedly(Return(6));

    Calc calc(adder);
    EXPECT_EQ(calc.mul(2, 3), 6);

}

TEST(CalculationTest, MultiplicationNegative) {
    MockAdder adder;

    Calc calc(adder);
    EXPECT_EQ(calc.mul(2, -3), -6);
}

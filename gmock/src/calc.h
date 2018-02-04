#ifndef CALC_H__
#define CALC_H__

#include "adder.h"

class Calc {
public:
    Calc(Adder& adder);
    int add(int lhs, int rhs);
    int mul(int lhs, int rhs);

private:
    Adder& adder_;
};

#endif//CALC_H__

#include "calc.h"

Calc::Calc(Adder& adder) : adder_(adder) {
}

int Calc::add(int lhs, int rhs) {
    return adder_.add(lhs, rhs);
}

int Calc::mul(int lhs, int rhs) {
    int result = lhs;
    for(int i = 1; i < rhs; ++i) {
        result = adder_.add(result, lhs);
    }
    return result;
}

#include "calc.h"

int Calc::add(int lhs, int rhs) {
    return lhs + rhs;
}

int Calc::mul(int lhs, int rhs) {
    int result = lhs;
    for(int i = 1; i < rhs; ++i) {
        result += lhs;
    }
    return result;
}

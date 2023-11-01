//
// Created by Alymuhammad Bjiani on 11/1/23.
//
#include "operators.h"
#include <stdexcept>
int Adder::compute(int operand1, int operand2) {
    return operand1 + operand2;
}
int Subtractor::compute(int operand1, int operand2) {
    return operand1 - operand2;
}
int Multiplier::compute(int operand1, int operand2) {
    return operand1 * operand2;
}
int Dividor::compute(int operand1, int operand2) {
// divide by zero
    if (operand2 == 0) {
        throw std::invalid_argument("divide by zero");
    }
    return operand1/operand2;
}

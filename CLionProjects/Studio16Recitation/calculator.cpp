//
// Created by Alymuhammad Bjiani on 11/1/23.
//

#include <iostream>
#include "calculator.h"
#include "operators.h"
using namespace std;
calculator::calculator() : memory(0) {}
int calculator::compute(char op, int operand1, int operand2) {
    Adder a;
    Subtractor s;
    Multiplier m;
    Dividor d;

    if(op == '+'){
        memory = a.compute(operand1, operand2);
        return memory;
    } else if(op == '-'){
        memory = s.compute(operand1, operand2);
        return memory;
    }
    else if (op == '*'){
        memory = m.compute(operand1, operand2);;
        return memory;
    }
    else if(op == '/') {
        if (operand2 == 0) {
            throw std::invalid_argument("divide by zero");
        }
        memory = d.compute(operand1, operand2);
        return memory;
    } else {
        memory = 0;
        throw invalid_argument("operator not supported")
    }
}

int calculator::compute(char op, int operand2){
    return compute(op, memory, operand2);
}
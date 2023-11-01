//
// Created by Alymuhammad Bjiani on 11/1/23.
//

#ifndef STUDIO16RECITATION_CALCULATOR_H
#define STUDIO16RECITATION_CALCULATOR_H


class calculator{
private:
    int memory;

public:
    calculator();
    int compute(char op, int operand1, int operand2);
    int compute(char op, int operand2);
};

#endif //STUDIO16RECITATION_CALCULATOR_H

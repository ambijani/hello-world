//
// Created by Alymuhammad Bjiani on 11/1/23.
//

#ifndef STUDIO16RECITATION_OPERATORS_H
#define STUDIO16RECITATION_OPERATORS_H

#pragma once
class AbtractOperator{
    virtual int compute(int operand1, int operand2) = 0;
};
class Adder : public AbtractOperator{
public:
    int compute(int operand1, int operand2) override;
};
class Subtractor : public AbtractOperator{
public:
    int compute(int operand1, int operand2) override;
};
class Multiplier : public AbtractOperator{
public:
    int compute(int operand1, int operand2) override;
};
class Dividor : public AbtractOperator{
public:
    int compute(int operand1, int operand2) override;
};

#endif //STUDIO16RECITATION_OPERATORS_H

//
// Created by Oz Tamir on 28/02/2016.
//

#ifndef CALC_EXPRESSION_H
#define CALC_EXPRESSION_H

#include <string>

#include "Number.h"
#include "Operator.h"

class Expression : public Number {
public:
    Expression(std::string stringValue);
    Expression(Number *lval, Number *rval, Operator *op);
    void evaluate();

    Number* GetNumberValue();
    Operator* GetOpValue();
    bool isNumber();

private:
    Number *lval;
    Number *rval;
    Operator *op;
    Number *value;
    bool isNum;
};


#endif //CALC_EXPRESSION_H

//
// Created by Oz Tamir on 28/02/2016.
//

#ifndef CALC_OPERATOR_H
#define CALC_OPERATOR_H

#include "Number.h"
#include <string>

class Operator {

public:
    Operator();
    Operator(std::string op);
    Number* eval(Number *lval, Number *rval);
    std::string GetOperator();

    static bool isOperator(std::string str);

private:
    std::string op_char;
};


#endif //CALC_OPERATOR_H

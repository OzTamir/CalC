//
// Created by Oz Tamir on 28/02/2016.
//

#include "Expression.h"

Expression::Expression(Number *lval, Number *rval, Operator *op) {
    this->lval = lval;
    this->rval = rval;
    this->op = op;

    evaluate();
}

void Expression::evaluate() {
    this->value = op->eval(lval, rval);
}

Number* Expression::GetNumberValue() {
    return this->value;
}

Expression::Expression(std::string stringValue) {
    if (Operator::isOperator(stringValue)) {
        op = new Operator(stringValue);
        value = NULL;
        isNum = false;
    }
    else {
        value = new Number(stringValue);
        op = NULL;
        isNum = true;
    }
}

bool Expression::isNumber() {
    return isNum;
}

Operator *Expression::GetOpValue() {
    return this->op;
}

//
// Created by Oz Tamir on 28/02/2016.
//

#include <iostream>
#include "Expression.h"

Expression::Expression(double value) {
    this->value = value;
    hasValue = true;
}

Expression::Expression(std::string stringValue) {
    if (Operator::isOperator(stringValue)) {
        this->op = new Operator(stringValue);
        hasValue = false;
    }
    else {
        this->value = std::stod(stringValue);
        hasValue = true;
    }
    this->strValue = stringValue;
}

double Expression::Evaluate() {
    if (hasValue)
        return this->value;
    return op->eval(lval->Evaluate(), rval->Evaluate());
}

Expression::Expression(Expression* lval, Expression* rval, Operator *op) {
    this->lval = lval;
    this->rval = rval;
    this->op = op;
    hasValue = false;
}

void Expression::SetValue(double value) {
    this->value = value;
    hasValue = true;
}

void Expression::SetLVal(Expression* lval) {
    this->lval = lval;
}

void Expression::SetRVal(Expression* rval) {
    this->rval = rval;
}

void Expression::SetOperator(Operator *op) {
    this->op = op;
}

double Expression::GetValue() {
    return value;
}

Expression* Expression::GetLVal() {
    return lval;
}

Expression* Expression::GetRVal() {
    return rval;
}

Operator *Expression::GetOperator() {
    return op;
}

Expression::Expression() {
    hasValue = false;
}

std::string Expression::GetStringValue() {
    return this->strValue;
}

//Expression::Expression(const Expression &src) {
//    this->value = src.value;
//    lval = new Expression();
//    rval = new Expression();
//    op = new Operator();
//    this->lval = src.lval;
//    this->rval = src.rval;
//    this->op = src.op;
//}
//
// Created by Oz Tamir on 28/02/2016.
//

#ifndef CALC_EXPRESSION_H
#define CALC_EXPRESSION_H

#include <string>
#include "Operator.h"

class Expression {
public:
    Expression();
    Expression(std::string stringValue);
    Expression(double value);
    Expression(Expression* lval, Expression* rval, Operator* op);

    double Evaluate();

    void SetValue(double value);
    void SetLVal(Expression* lval);
    void SetRVal(Expression* rval);
    void SetOperator(Operator* op);

    double GetValue();
    Expression* GetLVal();
    Expression* GetRVal();
    Operator* GetOperator();
    std::string GetStringValue();

private:
    double value;
    std::string strValue;
    Expression *lval, *rval;
    Operator* op;
    bool hasValue;

};


#endif //CALC_EXPRESSION_H

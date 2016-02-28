//
// Created by Oz Tamir on 28/02/2016.
//

#include "Operator.h"

Operator::Operator(std::string op) {
    op_char = op;
}

Number* Operator::eval(Number *lval, Number *rval) {
    // TODO: Make op_char into an enum and replace this if chain with a switch
    if (op_char == "+")
        return new Number(lval->Get() + rval->Get());
    if (op_char == "-")
        return new Number(lval->Get() - rval->Get());
    if (op_char == "*")
        return new Number(lval->Get() * rval->Get());
    if (op_char == "/")
        // TODO: What if rval is 0?
        return new Number(lval->Get() / rval->Get());
    // TODO: What else?
    return new Number(-1);
}

std::string Operator::GetOperator() {
    return op_char;
}

bool Operator::isOperator(std::string str) {
    return (str == "+") ||
            (str == "-") ||
            (str == "*") ||
            (str == "/");
}

Operator::Operator() {

}

//
// Created by Oz Tamir on 28/02/2016.
//

#include "Operator.h"

Operator::Operator(std::string op) {
    op_char = op;
}

double Operator::eval(double lval, double rval) {
    // TODO: Make op_char into an enum and replace this if chain with a switch
    if (op_char == "+")
        return lval + rval;
    if (op_char == "-")
        return lval - rval;
    if (op_char == "*")
        return lval * rval;
    if (op_char == "/")
        // TODO: What if rval is 0?
        return lval / rval;
    // TODO: What else?
    return -1;
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

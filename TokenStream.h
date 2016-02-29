//
// Created by Oz Tamir on 28/02/2016.
//

#ifndef CALC_TOKEN_STREAM_H
#define CALC_TOKEN_STREAM_H

#include <string>
#include <vector>

#include "Operator.h"
#include "Expression.h"

class TokenStream {

public:
    TokenStream(std::string *stringStream);
    double evaluateStream();

private:
    void parseStream(std::string *stream);
    Expression* createTree(std::vector<Expression *> stream);
    std::vector<Expression *> tokenStream;

};


#endif //CALC_TOKEN_STREAM_H

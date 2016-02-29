//
// Created by Oz Tamir on 28/02/2016.
//

#include <iostream>
#include "TokenStream.h"

TokenStream::TokenStream(std::string *stringStream) :
    tokenStream()
{
    parseStream(stringStream);
}

double TokenStream::evaluateStream() {
    Expression* tree = createTree(tokenStream);
    return tree->Evaluate();
}

void TokenStream::parseStream(std::string *stream) {
    std::string temp = "";
    for (std::string::iterator it = stream->begin(); it < stream->end(); ++it) {
        if (*it == ' ') {
            // TODO: What if the stream starts with a space?
            tokenStream.push_back(new Expression(temp));
            temp = "";
        }
        else {
            temp += *it;
        }
    }
    if (temp.length() != 0)
        tokenStream.push_back(new Expression(temp));
}

Expression* TokenStream::createTree(std::vector<Expression *> stream) {
    if (stream.size() == 1) {
        return stream.at(0);
    }
    Expression* result = new Expression();
    result->SetRVal(stream.back());
    stream.pop_back();

    result->SetOperator(stream.back()->GetOperator());
    stream.pop_back();

    if (stream.size() > 1) {
        result->SetLVal(createTree(stream));
    }
    else {
        result->SetLVal(stream.back());
    }

    return result;
}

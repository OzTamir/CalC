//
// Created by Oz Tamir on 28/02/2016.
//

#include "TokenStream.h"

TokenStream::TokenStream(std::string *stringStream) :
    tokenStream()
{
    parseStream(stringStream);
}

Number TokenStream::evaluateStream() {
    Number result;
    Number a, b;
    Operator op;
    for (std::vector<Expression>::iterator it = tokenStream.begin(); it < tokenStream.end(); ++it) {
        if (it == tokenStream.begin()) {
            a = *it->GetNumberValue();
            it++;
        }
        else {
            a = result;
        }
        op = *it->GetOpValue();
        it++;
        b = *it->GetNumberValue();
        result = *op.eval(&a, &b);
    }

    return result;
}

void TokenStream::parseStream(std::string *stream) {
    std::string temp = "";
    for (std::string::iterator it = stream->begin(); it < stream->end(); ++it) {
        if (*it == ' ') {
            // TODO: What if the stream starts with a space?
            tokenStream.push_back(Expression(temp));
            temp = "";
        }
        else {
            temp += *it;
        }
    }
    tokenStream.push_back(Expression(temp));
}

//
// Created by Oz Tamir on 28/02/2016.
//

#ifndef CALC_NUMBER_H
#define CALC_NUMBER_H

#include <string>

class Number {
public:
    Number();
    Number(std::string stringValue);
    Number(int intValue);
    int Get();
    void Set(int newValue);
private:
    int value;
};


#endif //CALC_NUMBER_H

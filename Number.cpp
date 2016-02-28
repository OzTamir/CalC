//
// Created by Oz Tamir on 28/02/2016.
//

#include "Number.h"

Number::Number(std::string stringValue) {
    value = std::stoi(stringValue);
}

int Number::Get() {
    return value;
}

Number::Number(int intValue) {
    value = intValue;
}

Number::Number() {

}

void Number::Set(int newValue) {
    value = newValue;
}

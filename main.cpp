#include <iostream>

#include "TokenStream.h"

int main() {
    std::string input;
    getline(std::cin, input);
    TokenStream ts(&input);
    std::cout << ts.evaluateStream().Get() << std::endl;
    return 0;
}
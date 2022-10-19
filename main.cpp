#include <iostream>
#include "funcs.h"

int main() {
    std::string currentLine;
    /**
    while(std::getline(std::cin, currentLine)) {
        std::cout << removeLeadingSpaces(currentLine) << std::endl;
    }*/
    int indentLevel = 0;
    while(std::getline(std::cin, currentLine)) {
        if (countChar(currentLine, '}') == 1) {
            indentLevel--;
        }
        std::cout << indentLine(removeLeadingSpaces(currentLine), indentLevel) << std::endl;
        if (countChar(currentLine, '{') == 1) {
            indentLevel++;
        }
    }
    return 0;
}
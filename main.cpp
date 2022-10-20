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
        std::string unindentedLine = removeLeadingSpaces(currentLine);
        bool firstCharClose = unindentedLine[0] == '}';
        if (firstCharClose) {
            indentLevel--;
        }
        std::cout << indentLine(currentLine, indentLevel) << std::endl;
        indentLevel += countChar(unindentedLine, '{');
        if (!firstCharClose) {
            indentLevel -= countChar(unindentedLine, '}');
        }
    }
    return 0;
}

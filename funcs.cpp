#include "funcs.h"

std::string removeLeadingSpaces(std::string line) {
    std::string result;
    int i = 0;
    while (std::isspace(line[i]) || line[i] == '\t') {
        i++;
    }

    for (long unsigned int j = i; j < line.length(); j++) {
        result += line[j];
    }
    return result;
}

int countChar(std::string line, char c) {
    int numChars = 0;
    for (char currentChar : line) {
        if (currentChar == c) {
            numChars++;
        }
    }
    return numChars;
}

std::string indentLine(std::string line, int indentLevel) {
    return std::string(indentLevel, '\t') + removeLeadingSpaces(line);
}

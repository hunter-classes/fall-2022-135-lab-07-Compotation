#include "funcs.h"
#include <iostream>

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

void unindentLines(std::istream& stream) {
    std::string currentLine;
    while(std::getline(stream, currentLine)) {
        std::cout << removeLeadingSpaces(currentLine) << std::endl;
    }
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

void indentLines(std::istream& stream) {
    std::string currentLine;
    int indentLevel = 0;
    while(std::getline(stream, currentLine)) {
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
}

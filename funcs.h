#pragma once
#include <string>

std::string removeLeadingSpaces(std::string line);
int countChar(std::string line, char c);
std::string indentLine(std::string line, int indentLevel);
void indentLines(std::istream& stream);
void unindentLines(std::istream& stream);

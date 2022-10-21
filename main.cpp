#include <iostream>
#include "funcs.h"
#include <fstream>

int main() {
    const std::string FILENAME = "poorlyformatted.cpp";
    std::ifstream taskAFile;
    taskAFile.open(FILENAME);
    std::cout << "Task A" << std::endl << std::endl;
    unindentLines(taskAFile);

    std::ifstream taskBFile;
    taskBFile.open(FILENAME);
    std::cout << "Task B" << std::endl << std::endl;
    indentLines(taskBFile);
}

#include <iostream>
#include "funcs.h"
#include <fstream>

int main() {
    std::ifstream taskAFile;
    taskAFile.open("poorlyformatted.cpp");
    std::cout << "Task A" << std::endl << std::endl;
    unindentLines(taskAFile);

    std::ifstream taskBFile;
    taskBFile.open("poorlyformatted.cpp");
    std::cout << "Task B" << std::endl << std::endl;
    indentLines(taskBFile);
}

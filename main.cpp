#include <iostream>
#include "funcs.h"
#include <fstream>

int main() {
    const std::string FILENAME = "poorlyformatted.cpp";

    //Adding file before task -- Michelle Wen
    std::cout << "Before Task" << std::endl << std::endl;
    std::string line;
    std::ifstream beforeTask(FILENAME);
    while(getline(beforeTask,line))
    {
	 std::cout << line << std::endl;
    }
    //End of change

    std::ifstream taskAFile;
    taskAFile.open(FILENAME);
    std::cout << "Task A" << std::endl << std::endl;
    unindentLines(taskAFile);

    std::ifstream taskBFile;
    taskBFile.open(FILENAME);
    std::cout << "Task B" << std::endl << std::endl;
    indentLines(taskBFile);
}

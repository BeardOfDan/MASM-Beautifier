// This file will accept the name of a file, then read the file, then use the
// information to create a formatted copy of the file, then save the output in
// "Submission/" with the same name, and the extension ".asm"

#include <iostream>
using std::cout;
using std::endl;
using std::getline;

#include <sstream>
using std::istringstream;

#include <string>
using std::string;
using std::to_string;

#include <fstream>
using std::ifstream;

#include <vector>
using std::vector;

int main(int argc, char** argv) {
  if (argc < 2) {  // No name argument was supplied
    cout << "Error code: \"Id10t\"\n  No filename was supplied" << endl;
    return 0;
  }

  // TODO: Check if included .asm extension, if not, then append it!
  const string fileName = (string)argv[1];

  cout << endl << "About to read the file \"" << fileName << "\"..." << endl;

  ifstream inputFile(fileName);

  // put each line of the file into the string vector 'contents'
  string line{};
  vector<string> contents;

  while (getline(inputFile, line)) {
    contents.push_back(line);
  }

  inputFile.close();

  cout << "The file was read" << endl << endl;

  enum Tasks { indentation, verticalAlignment, complete };
  int enumCount = 0;
  for (int task = indentation; task != complete; task++) {
    enumCount++;
  }

  string taskToString[enumCount];
  taskToString[indentation] = "indentation";
  taskToString[verticalAlignment] = "verticalAlignment";
  taskToString[complete] = "complete";

  // perform operations based on array's contents
  for (int task = indentation; task != complete; task++) {
    cout << "Performing task: " << taskToString[task] << endl;

    // Go through every line
    // for (size_t i{}; i < contents.size(); i++) {
    // }
  }

  cout << endl << "Beautification complete..." << endl;

  return 0;
}

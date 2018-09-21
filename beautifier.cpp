// This file will accept the name of a file, then read the file, then use the
// information to create a formatted copy of the file, then save the output in
// "Submission/" with the same name, and the extension ".asm"

#include <iostream>
using std::cout;
using std::endl;
using std::getline;

#include <string>
using std::string;
using std::to_string;

#include <fstream>
using std::ifstream;

#include <vector>
using std::vector;

int getEndOfBlock(vector<string> contents, int currentLine);

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

  enum Tasks {
    indentation = 0,
    verticalAlignment = 1,
    labelLeftAlign = 2,
    opcodeIndent = 3,
    alignFirstOperands = 4,
    alignComments = 5,
    upperCaseConstants = 6,
    lowerCaseDataLabels = 7,
    warnUncommentedCode = 8,
    complete = 9
  };

  string taskToString[complete + 1];

  taskToString[indentation] = "indentation";
  taskToString[verticalAlignment] = "verticalAlignment";
  taskToString[labelLeftAlign] = "labelLeftAlign";
  taskToString[opcodeIndent] = "opcodeIndent";
  taskToString[alignFirstOperands] = "alignFirstOperands";
  taskToString[alignComments] = "alignComments";
  taskToString[upperCaseConstants] = "upperCaseConstants";
  taskToString[lowerCaseDataLabels] = "lowerCaseDataLabels";
  taskToString[warnUncommentedCode] = "warnUncommentedCode";
  taskToString[complete] = "complete";

  // perform operations based on array's contents
  for (int task = indentation; task != complete; task++) {
    cout << "Performing task: " << taskToString[task] << endl;

    // Likely break each task out into a funciton
    // then execute function based on switch statement of task

    // Go through every line
    // for (size_t i{}; i < contents.size(); i++) {
    // }
  }

  cout << endl << "Beautification complete..." << endl;

  return 0;
}

// Returns the line number for the last line of the current code block
// This is for handling indentations and vertical alignment
// In the event of an issue (ex. called outside of a procedure) returns -1
int getEndOfBlock(vector<string> contents, int currentLine) {
  return -1;
  // TODO: Implement this function
}

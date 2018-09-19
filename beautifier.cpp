// This file will accept the name of a file, then read the file, then use the
// information to create a formatted copy of the file, then save the output in
// "Submission/" with the same name, and the extension ".asm"

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::to_string;

int main(int argc, char** argv) {
  const string fileName = (argc > 1) ? ((string)argv[1]) : "fileName";

  cout << "About to read the file \"" << fileName << "\"" << endl;

  return 0;
}

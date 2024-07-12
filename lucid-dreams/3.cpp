#include <iostream>
using namespace std; // If commented line 5 throws error like //! error: ‘cout’ was not declared in this scope; did you mean ‘std::cout’?

int main() {
  cout << "Hello from Alena.\n";// \n to insert a new line character.
  cout << "Hello World, Sahil.\n";

  // Other way to insert a new line, is with the endl manipulator:
  cout << "Hello World, Mario!" << endl; 
  cout << "I am learning C++";

  // However, \n is used more often and is the preferred way.
  return 0;
}
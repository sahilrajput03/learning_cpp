#include <iostream>
using namespace std;

// function declaration.
void myFunction();

int main() {
    myFunction(); // call the function
    myFunction(); // call the function
    myFunction(); // call the function
    myFunction(); // call the function
    return 0;
}

// function definition:
void myFunction() {
  cout << "I just got executed!\n";
}

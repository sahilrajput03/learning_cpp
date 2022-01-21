#include <iostream>
using namespace std;

/* src: https://www.w3schools.com/cpp/cpp_functions.asp
A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
 */
// Create a function
void myFunction() {
  cout << "I just got executed!\n";
}

int main() {
    myFunction(); // call the function
    myFunction(); // call the function
    myFunction(); // call the function
    myFunction(); // call the function
    return 0;
}

// Note: If a user-defined function, such as myFunction() is declared after the main() function, an error will occur:
//!  error: ‘myFunction’ was not declared in this scope
//? However, it is possible to separate the declaration and the definition of the function - for code optimization.
// See next example for that demo.
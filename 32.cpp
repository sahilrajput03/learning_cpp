#include <iostream>
using namespace std;
/* 
?
## Parameters and Arguments
Information can be passed to functions as a parameter. Parameters act as variables inside the function.
Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:

When a parameter is passed to the function, it is called an argument. So, from the example above: fname is a parameter, while Liam, Jenny and Anja are arguments.
*/

// function declaration.
// A parameter with a default value, is often known as an "optional parameter".
void myFunction(string fname = "Sahil"); //? Note: We MUST give default value at place of declaration when we are have declaration and definition separate in a cpp program otherwise c++ compiler throws error.
void myFunction(string fname, int age);
int myFunction(int x, int y);
//? We're making use of function overloading as we are usin the same name for all of our functions. With function overloading, multiple functions can have the same name with different parameters.
//? IMPORATANT: Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.
void swapNums(int &x, int &y); // Pass By Reference. NOTE: We only need to add & to the params in function declarations and NO NEED to alter the function calling syntax. ~Sahil


int main() {
  myFunction();
  myFunction("Liam");
  myFunction("Liam", 20);
  cout << myFunction(5, 3);
  int a = 5, b = 3;

  cout << "\n\n";
  cout << "Before swap: " << "\n";
  cout << a << ", " << b << "\n";
  swapNums(a,b); // src: https://www.w3schools.com/cpp/cpp_function_reference.asp
  cout << a << ", " << b << "\n";
  return 0;
}

// function definition:
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int myFunction(int x, int y) {
  return x + y;
}

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
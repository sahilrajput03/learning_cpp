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
void myFunction(string fname);

int main() {
  myFunction("Liam"); // call the function
  myFunction("Jenny"); // call the function
  myFunction("Anja"); /// call the function
  return 0;
}

// function definition:
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

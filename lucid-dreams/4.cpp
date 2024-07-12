#include <iostream>
using namespace std;

/*src: https://www.w3schools.com/cpp/cpp_variables.asp
## Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false

## Syntax

type variableName = value;
*/

int main() {
    // You can also declare a variable without assigning the value, and assign the value later:
    int myNum;
    myNum = 15;
    cout << myNum;
    
    // int b = fun();
    // cout << b;
    return 0;
}

// int fun(){
//     return 23;
// }
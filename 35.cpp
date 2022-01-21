#include <iostream>
using namespace std;

/* src: https://www.w3schools.com/cpp/cpp_constructors.asp
?
## Constructors
A constructor in C++ is a special method that is automatically called when an object of a class is created.
To create a constructor, use the same name as the class, followed by parentheses ():

? Note: The constructor has the same name as the class, it is always public, and it does not have any return value.
 */

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World from constructor!";
    }
};

int main() {
    MyClass myObj;    // Create an object of MyClass (this will call the constructor)
    return 0;
}
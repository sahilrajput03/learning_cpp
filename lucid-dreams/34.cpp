#include <iostream>
using namespace std;

/* src:https://www.w3schools.com/cpp/cpp_class_methods.asp
?
## Methods are functions that belongs to the class.
There are two ways to define functions that belongs to a class:
Inside class definition
Outside class definition
 */

class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World 789!\n";
    }

    //? To DEFINE A FUNCTION OUTSIDE THE CLASS DEFINITION, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:
    void myMethod2();   // Method/function declaration
};

int main() {
    MyClass myObj;     // Create an object of MyClass
    myObj.myMethod();
    myObj.myMethod2();
    return 0;
}

void MyClass::myMethod2(){
    cout << "Hello World 1234!";
}
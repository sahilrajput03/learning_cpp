#include <iostream>
using namespace std;

/* src: https://www.w3schools.com/cpp/cpp_inheritance_multiple.asp
?
## Multiple Inheritance
A class can also be derived from more than one base class, using a comma-separated list:
 */
// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}

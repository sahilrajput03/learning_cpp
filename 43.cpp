#include <iostream>
using namespace std;

/* src: https://www.w3schools.com/cpp/cpp_inheritance_access.asp
?
## Access Specifiers
You learned from the Access Specifiers chapter that there are three specifiers available in C++. Until now, we have only used public (members of a class are accessible from outside the class) and private (members can only be accessed within the class). The third specifier, protected, is similar to private, but it can also be accessed in the inherited class:
*/
// Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";

    //below statement would throw error like //! error: ‘int Employee::salary’ is protected within this context
    //   cout << "Trying to access salary directly(protected): " << myObj.salary << "\n";
    return 0;
}

#include <iostream>
using namespace std;

/* src: https://www.w3schools.com/cpp/cpp_access_specifiers.asp
## In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
 */
class MyClass {
    //? Note: By default, all members of a class are private if you don't specify an access specifier:
    int p;   // Private attribute
    int q;   // Private attribute
    
    public:    // Public access specifier
        int x;   // Public attribute
    private:   // Private access specifier
        int y;   // Private attribute
};

int main() {
    MyClass myObj;
    myObj.x = 25;  // Allowed (public)
    myObj.y = 50;  // Not allowed (private)
    //^^^^ throw error: //!: error: ‘int MyClass::y’ is private within this context: 14 |     myObj.y = 50;
    //? FYI: Note: It is possible to access private members of a class using a public method inside the same class. See the next chapter (Encapsulation) on how to do this.
    //? Tip: It is considered good practice to declare your class attributes as private (as often as you can). This will reduce the possibility of yourself (or others) to mess up the code. This is also the main ingredient of the Encapsulation concept, which you will learn more about in the next chapter.
    return 0;
}
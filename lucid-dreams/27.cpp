#include <iostream>
using namespace std;

/* src: https://www.w3schools.com/cpp/cpp_pointers.asp
## C++ Pointers: Creating Pointers
You learned from the previous chapter, that we can get the memory address of a variable by using the & operator:
?
A pointer however, is a variable that stores the memory address as its value.
A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

?
Tip: There are three ways to declare pointer variables, but the first way is preferred:

string* mystring; // Preferred
string *mystring;
string * mystring;
 */
int main() {
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food (Note that the type of the pointer has to match the type of the variable you're working with).

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    //? You can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):
    //? Dereference operator (*): Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    //? Note that the * sign can be confusing here, as it does two different things in our code:
    // When used in declaration (string* ptr), it creates a pointer variable.
    // When not used in declaration, it act as a dereference operator.
    return 0;
}
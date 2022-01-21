#include <iostream>
using namespace std;

/* src:https://www.w3schools.com/cpp/cpp_exceptions.asp
?
Handle Any Type of Exceptions (...)
If you do not know the throw type used in the try block, you can use the "three dots" syntax (...) inside the catch block, which will handle any type of exception:
*/

int main() {
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else {
            throw 505;
        }
    }
    catch (...) {
        cout << "Access denied - You must be at least 18 years old.\n";
    }
    return 0;
}
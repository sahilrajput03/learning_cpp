#include <iostream>
using namespace std;

int main() {
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName + " " + "is a good person.";
    cout << "\n\n";
    string fullName_via_append = firstName.append(lastName);// append method can be used to join two strings as well.
    // ? FYI: using append method is known to be faster than using + operator.
    cout << fullName_via_append;
    return 0;
}
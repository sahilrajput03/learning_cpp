#include <iostream>
using namespace std;

int main() {
    string myName = "John ";
    cout << "Characters in John is: " << myName.length();
    // Tip: You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). It is completely up to you if you want to use length() or size():
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "\nThe length of the txt string is: " << txt.size() << "\n\n\n";
    /*
    ## Access Strings
    You can access the characters in a string by referring to its index number inside square brackets [].
    This example prints the first character in myString:
    */
    string myString = "Hello";
    cout << myString[0] << "\n\n\n"; // Output: H

    /*
    ## Change String Characters
    To change the value of a specific character in a string, refer to the index number, and use single quotes:
    */
    string myStringy = "Hello";
    myStringy[0] = 'J';
    cout << myStringy; // Outputs Jello instead of Hello
    return 0;
}
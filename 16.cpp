#include <iostream>
using namespace std;
// Weakness of cin ??
// cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words):
int main() {
    string fullName;
    cout << "Type your full name: ";
    //? We often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:
    getline (cin, fullName); //? This is how you use getline() function.
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John Doe //? Works as expected.
    return 0;
}
#include <iostream>
using namespace std;
// Weakness of cin ??
// cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words):
int main() {
    string fullName;
    cout << "Type your full name: ";
    cin >> fullName;
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John //! Yes this isn't what you're looking for. So instead of cin you must use ```getline()``` function to read a line of text.
    // ? See next example for getline().
    
    return 0;
}
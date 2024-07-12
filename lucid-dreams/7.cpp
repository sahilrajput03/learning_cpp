#include <iostream>
using namespace std;

/*src: https://www.w3schools.com/cpp/cpp_user_input.asp
## C++ User Input
You have already learned that cout is used to output (print) values. Now we will use cin to get user input.
cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).
*/
int main() {
    int x; 
    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x; // Display the input value

    return 0;
}



#include <iostream>
using namespace std;

/* src: https://www.w3schools.com/cpp/cpp_conditions.asp
## C++ Conditions and If Statements
C++ supports the usual logical conditions from mathematics:

Less than:                      a < b
Less than or equal to:          a <= b
Greater than:                   a > b
Greater than or equal to:       a >= b
Equal to                        a == b
Not Equal to:                   a != b
You can use these conditions to perform different actions for different decisions.

C++ has the following conditional statements:

Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed
 */

int main() {
    // cout << "Hello World!";
    if (20 > 18) {
    cout << "20 is greater than 18\n\n";

    int t1 = 20;
    if (t1 < 18) {
        cout << "Good day1.\n\n";
    } else {
        cout << "Good evening1.\n\n";
    }
    // Output: "Good evening."

    int t2 = 22;
    if (t2 < 10) {
        cout << "Good morning2.";
    } else if (t2 < 20) {
        cout << "Good day2.\n\n";
    } else {
        cout << "Good evening2.\n\n";
    }
    // Outputs "Good evening."
    }

    //? ## Short Hand If...Else (Ternary Operator), src: https://www.w3schools.com/cpp/cpp_conditions_shorthand.asp
    int t3 = 20;
    string result = (t3 < 18) ? "Good day3." : "Good evening3.";
    cout << result;
    return 0;
}
#include <iostream>
using namespace std;

/* src: https://www.w3schools.com/cpp/cpp_switch.asp
## The break Keyword
When C++ reaches a break keyword, it breaks out of the switch block.

This will stop the execution of more code and case testing inside the block.

When a match is found, and the job is done, it's time for a break. There is no need for more testing.
* A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.

## The default Keyword
The default keyword specifies some code to run if there is no case match.
Note: The default keyword must be used as the last statement in the switch, and it does not need a break.
 */

int main() {
    int day = 4;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
    }
    // Outputs "Thursday" (day 4)
    return 0;
}
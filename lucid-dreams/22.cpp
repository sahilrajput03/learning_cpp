#include <iostream>
using namespace std;

/* 
## Break
You have already seen the break statement used in an earlier chapter of this tutorial. It was used to "jump out" of a switch statement.
The break statement can also be used to jump out of a loop.
This example jumps out of the loop when i is equal to 4:
 */
int main() {
    cout << "break example in for loop:\n";
    for (int i = 0; i <= 5; i++) {
        if ( i == 4){
            break;
        }
        cout << i << "\n";
    }
    cout << "\n\n" << "continue example in for loop:";
    for (int i = 0; i <= 5; i++) {
        if ( i == 2){
            continue;
        }
        cout << i << "\n";
    }
    cout << "\n\n" << "break example in while loop:";
    // You can also use break and continue in while loops:
    // Break Example
    int i = 0;
    while (i < 10) {
        cout << i << "\n";
        i++;
        if (i == 4) {
            break;
        }
    }
    cout << "\n\n" << "continue example in while loop:";
    i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        cout << i << "\n";
        i++;
    }
    return 0;
}
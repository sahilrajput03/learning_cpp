#include <iostream>
using namespace std;

/*
?
Character Types
The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A' or 'c':

*/

int main() {
    char myGrade = 'B';
    cout << myGrade; // Output: B
    cout << "\n";
    
    // Alternatively, you can use ASCII values to display certain characters:
    char p = 65, q = 66, r = 67;
    cout << p; // Output: A
    cout << q; // Output: B
    cout << r; // Output: C
    return 0;
}



#include <iostream>
using namespace std;
/* 
## C++ Arrays
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
 */
int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0] << "\n";
    // Output: Volvo

    cars[0] = "Opel";
    cout << cars[0];
    // Output: Opel

    cout << "\n\n" << "PRINTING ALL ELEMENTS:" << "\n";
    for(int i = 0; i < 4; i++) {
        cout << cars[i] << "\n";
    }
    return 0;
}
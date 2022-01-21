#include <iostream>
using namespace std;

/*src: https://www.w3schools.com/cpp/cpp_references.asp
? Creating References
*/

int main() {
    string food = "Pizza";  // food variable
    string &meal = food;    // meal is reference to food, or simply a "reference variable".

    //? ow, we can use either the variable name food or the reference name meal to refer to the food variable:
    cout << food << "\n";   // Output: Pizza
    cout << meal << "\n";   // Output: Pizza
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // ## Omit Array Size
    // You don't have to specify the size of the array. But if you don't, it will only be as big as the elements that are inserted into it:
    string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3

    string newCars[5] = {"Volvo", "BMW", "Ford"}; // size of array is 5, even though it's only three elements inside it
    // Now you can add a fourth and fifth element without overwriting the others:

    cars[3] = "Mazda";
    cars[4] = "Tesla";

    // ## Omit Elements on Declaration
    // It is also possible to declare an array without specifying the elements on declaration, and add them later:
    string newVehicles[5];
    newVehicles[0] = "Volvo";
    newVehicles[1] = "BMW";

    return 0;
}
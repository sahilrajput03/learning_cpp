#include <cstdio>
#include <string>
/////////////////////////////
// Default function arguments
/////////////////////////////

// You can provide default arguments for a function
// if they are not provided by the caller.

int doSomethingWithInts(int a = 1, int b = 4) {
    return a + b;
}

int main() {
    printf("%d \n", doSomethingWithInts());      // a = 1, b = 4
    printf("%d \n", doSomethingWithInts(20));    // a = 20, b = 4
    printf("%d \n", doSomethingWithInts(5));     // a = 20, b = 5
    printf("%d \n", doSomethingWithInts(1, 1));  // a = 20, b = 5
}

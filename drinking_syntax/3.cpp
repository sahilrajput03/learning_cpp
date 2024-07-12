#include <cstdio>
#include <string>
/////////////////////////////
// Default function arguments
/////////////////////////////

// You can provide default arguments for a function
// if they are not provided by the caller.

// std::string

std::string doSomethingWithInts(int a = 1, int b = 4) {
    return std::to_string(a + b);
}

int main() {
    // std::string greet = std::to_string(999);
    // printf("%s", "Hello world.\n", greet.c_str());

    printf("%s \n", doSomethingWithInts().c_str());      // a = 1, b = 4
    printf("%s \n", doSomethingWithInts(20).c_str());    // a = 20, b = 4
    printf("%s \n", doSomethingWithInts(5).c_str());     // a = 20, b = 5
    printf("%s \n", doSomethingWithInts(1, 1).c_str());  // a = 20, b = 5
}

#include <cstdio>

// Function Overloading

void print(char const* myString) {
    printf("String %s\n", myString);
}

void print(int myInt) {
    printf("My int is %d\n", myInt);
}

int main() {
    print("Hello");  // Resolves to void print(const char*)
    print(15);       // Resolves to void print(int)
}

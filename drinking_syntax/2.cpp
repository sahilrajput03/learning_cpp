/////////////////////////////
// Default function arguments
/////////////////////////////

// You can provide default arguments for a function
// if they are not provided by the caller.

void doSomethingWithInts(int a = 1, int b = 4) {
    // Do something with the ints here
}

int main() {
    doSomethingWithInts();       // a = 1,  b = 4
    doSomethingWithInts(20);     // a = 20, b = 4
    doSomethingWithInts(20, 5);  // a = 20, b = 5
}
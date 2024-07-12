#include <cstdio>
#include <string>

std::string doSomethingWithInts(int a = 1, int b = 4) {
    return std::to_string(a + b);
}

int main() {
    // std::string greet = std::to_string(999);
    // printf("%s", "Hello world.\n", greet.c_str());

    printf("%s \n", doSomethingWithInts().c_str());  // a = 1, b = 4
}

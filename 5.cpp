#include <iostream>
using namespace std;
// Note: Defining myFun below main function throws error on line 10, i.e., //! error: ‘myFun’ was not declared in this scope.
int myFun(){
    return 23;
}

int main() {
    int b = myFun();
    cout << b;
    cout << myFun();// This works as well.
    return 0;
}



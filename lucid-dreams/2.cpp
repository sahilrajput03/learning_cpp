#include <iostream>
using namespace std; // If commented line 5 throws error like //! error: ‘cout’ was not declared in this scope; did you mean ‘std::cout’?

int main() {
  cout << "Hello from Alena.";

  // Below still works good though.
  std::cout << "Hello World, Sahil.";
  return 0;
}
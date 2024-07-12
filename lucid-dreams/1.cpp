#include <iostream> // A header file library that lets us work with input and output objects, such as cout.
/*
Without above header it throws error like: //! ‘std::cout’ is defined in header ‘<iostream>’; did you forget to ‘#include <iostream>’?
Note: Every C++ statement ends with a semicolon ;.
*/
int main() {
  // ? FYI: cout stands for "character output"
  std::cout << "Hello World, Sahil. "; // However, note that it does not insert a new line at the end of the output:
  std::cout << "Hello World, Rohini.";
  // cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World".
  return 0;
}
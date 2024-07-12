#include <iostream>
using namespace std;
/*
?
Data Type	Size	    Description
int	        4 bytes	    Stores whole numbers, without decimals
float	    4 bytes	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
double	    8 bytes	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
boolean	    1 byte	    Stores true or false values
char	    1 byte	    Stores a single character/letter/number, or ASCII values

?
float vs. double
The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.
*/
int main() {
    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    cout << "I am " << myNum << " years old." << endl;
    cout << myFloatNum << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl; // output: 1

    int x = 5, y = 6, z = 50;
    cout << "Sum of x,y and z is: " << x + y + z;

    // Constants
    // When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):
    const int minutesPerHour = 60;
    const float PI = 3.14;
    const int myFixedVar = 15;  // myNum will always be 15
    // myFixedVar = 10;  // this line would throws error like: //! error: assignment of read-only variable ‘myFixedVar’

    // A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    // Example
    cout << "\n\n";
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1; // Output: 35000
    cout << "\n"; // Output: 120000
    cout << d1;

    return 0;
}



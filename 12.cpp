#include <iostream>
using namespace std;

/* src: https://www.w3schools.com/cpp/cpp_operators.asp

## Arithmetic Operators
Arithmetic operators are used to perform common mathematical operations.
?
Operator	Name	Description	Example	Try it
+	Addition	Adds together two values	x + y	
-	Subtraction	Subtracts one value from another	x - y	
*	Multiplication	Multiplies two values	x * y	
/	Division	Divides one value by another	x / y	
%	Modulus	Returns the division remainder	x % y	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x

---

## Assignment Operators
Assignment operators are used to assign values to variables.

A list of all assignment operators:
?
Operator	Example	    Same As
=	        x = 5	    x = 5	
+=	        x += 3	    x = x + 3	
-=	        x -= 3	    x = x - 3	
*=	        x *= 3	    x = x * 3	
/=	        x /= 3	    x = x / 3	
%=	        x %= 3	    x = x % 3	
&=	        x &= 3	    x = x & 3	
|=	        x |= 3	    x = x | 3	
^=	        x ^= 3	    x = x ^ 3	
>>=	        x >>= 3	    x = x >> 3	
<<=	        x <<= 3	    x = x << 3

---

## Comparison Operators
Comparison operators are used to compare two values.

Note: The return value of a comparison is either true (1) or false (0).

A list of all comparison operators:
?
Operator	Name	Example	Try it
==	Equal to	x == y	
!=	Not equal	x != y	
>	Greater than	x > y	
<	Less than	x < y	
>=	Greater than or equal to	x >= y	
<=	Less than or equal to	x <= y	

---

## Logical Operators
Logical operators are used to determine the logic between variables or values:
?
Operator	Name	        Description                                                 Example
&& 	        Logical and	    Returns true if both statements are true	                x < 5 &&  x < 10	
|| 	        Logical or	    Returns true if one of the statements is true	            x < 5 || x < 4	
!	        Logical not	    Reverse the result, returns false if the result is true	    !(x < 5 && x < 10)

 */

int main() {
    int x = 5;
    int y = 3;
    cout << (x > y); // returns 1 (true)
    // Note: ```cout << x > y;``` //! will throw error.
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
/* src:
?
The fstream library allows us to work with files.

To use the fstream library, include both the standard <iostream> AND the <fstream> header file:
i.e, we need to use below import ```#include <fstream>```.

There are three classes included in the fstream library, which are used to create, write or read files:

?
Class	    Description
ofstream	Creates and writes to files
ifstream	Reads from files
fstream	    A combination of ofstream and ifstream: creates, reads, and writes to files

? IMO: ofstream, ifstream and fstream stands for outputFileStream, inputFileStream and fileStream. ~Sahil.

?
## Create and Write To a File
To create a file, use either the ofstream or fstream class, and specify the name of the file.
To write to the file, use the insertion operator (<<).
*/

int main() {
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!";

    // Close the file
    MyFile.close();
    // Why do we close the file?
    // It is considered good practice, and it can clean up unnecessary memory space.
    return 0;
}
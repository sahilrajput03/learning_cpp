#include <iostream>
#include <fstream>
using namespace std;

/* src:
?
## Read a File
To read from a file, use either the ifstream or fstream class, and the name of the file.
Note that we also use a while loop together with the getline() function (which belongs to the ifstream class) to read the file line by line, and to print the content of the file:
*/

int main() {
    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
    // Output the text from the file
    cout << myText;
    }

    // Close the file
    MyReadFile.close();

    return 0;
}
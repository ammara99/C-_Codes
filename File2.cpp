#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream infile("input.txt"); // Open file for reading

    if (!infile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    char ch;

    cout << "Contents of input.txt:" << endl;

    // Read character by character until end of file
    while (infile.get(ch)) {
        cout << ch; // Output each character
    }

    infile.close(); // Close file after reading

    return 0;
}


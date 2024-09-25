#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("record.txt"); // Open file for reading

    if (!infile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;

    cout << "Data stored in record.txt:" << endl;

    // Read and print each line from the file
    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close(); // Close file after reading

    return 0;
}


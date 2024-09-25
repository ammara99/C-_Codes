#include <iostream>
#include <string>
using namespace std;
// Function to count occurrences of 'a' in a string
int countAsInString(const string& str) {
    int count = 0;
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }
    return count;
}
int main() {
    string inputString;
    // Input a string from the user
    cout << "Enter a string: ";
    getline(cin, inputString);
    // Count occurrences of 'a' in the string
    int count = countAsInString(inputString);

    // Output the result
    cout << "Number of 'a's in the string: " << count << endl;

    return 0;
}


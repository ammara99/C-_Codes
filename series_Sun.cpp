#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }

    cout << "Sum of the series 1^2 + 2^2 + ... + " << n << "^2 = " << sum << endl;

    return 0;
}

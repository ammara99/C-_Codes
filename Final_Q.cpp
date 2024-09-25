#include <iostream>
using namespace std;
const int SIZE = 5;
int cube(int num) {
    return num * num * num;
}
int main() {
    int arr[SIZE];
    int *ptr;
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }
    ptr = arr; // Point ptr to the start of the array
    cout << "\nCubes of elements:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Element " << i + 1 << ": " << cube(*(ptr + i)) << endl;
    }
    return 0;
}


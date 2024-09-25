#include <iostream>
#include <string>
using namespace std;
struct Employee {
    string name;
    double salary;
    int scale;
};
void show(const Employee& emp) {
    cout << "Employee Name: " << emp.name << endl;
    cout << "Salary: " << emp.salary << endl;
    cout << "Scale: " << emp.scale << endl;
}
int main() {
    Employee emp;
    cout << "Enter Employee Name: ";
    getline(cin, emp.name);
    cout << "Enter Salary: ";
    cin >> emp.salary;
    cout << "Enter Scale: ";
    cin >> emp.scale;
    show(emp);
    return 0;
}

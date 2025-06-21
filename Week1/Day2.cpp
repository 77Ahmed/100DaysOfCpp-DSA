
// Day 2: C++ Basics - Input, Variables, Operators

#include <iostream>
using namespace std;

int main() {
    // Variables and Input
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Arithmetic
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int div = a / b;

    // Output
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
    cout << "Quotient: " << div << endl;

    // Type Casting
    float average = (float)(a + b) / 2;
    cout << "Average: " << average << endl;

    return 0;
}

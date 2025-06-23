// Day 1: Simple check using flowchart logic in real C++
// Problem: Check if number is positive or negative

#include <iostream>
using namespace std;

int main() {
    int number;

    // Input from user
    cout << "Enter a number: ";
    cin >> number;

    // Check conditions
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}


// Day 1: Simple check using flowchart logic in real C++
// Problem: Check if number is positive or negative

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is Positive" << endl;
    } else {
        cout << "The number is Negative" << endl;
    }

    return 0;
}

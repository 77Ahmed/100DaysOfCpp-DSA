# 📘 Day 2: C++ Basics – Syntax, Variables, Input, and Operators

## 🧠 What We Learned

---

### ✅ How Does Code Run?

- We **write code** in C++
- The **compiler (like g++)** translates it to machine language
- Then the **CPU executes it**

---

### ✅ Comments in C++

Used to explain code. Ignored by compiler.

```cpp
// This is a single-line comment

/*
 This is a
 multi-line comment
*/
✅ Variables
A variable stores a value.

You must declare it with a type.

cpp
Copy
Edit
int age = 21;
float price = 99.99;
char grade = 'A';
✅ Data Types
Type	Use for	Example
int	Whole numbers	5, -2, 100
float	Decimal numbers	5.5, 3.14
char	Single characters	'a', 'Z'
bool	True/false values	true, false
double	Bigger float	99.9999999

✅ Type Conversion & Type Casting
Type Conversion: Auto conversion by compiler.

cpp
Copy
Edit
int a = 5;
float b = a;  // converted automatically
Type Casting: Manual conversion.

cpp
Copy
Edit
float f = 5.9;
int x = (int)f;  // now x = 5
✅ Basic Syntax
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    // code here
    return 0;
}
#include <iostream>: adds input/output

using namespace std;: allows cout, cin

main(): Entry point of program

✅ Taking Input
cpp
Copy
Edit
int a;
cin >> a;  // takes input
cout << "Value is: " << a;
✅ Operators
Type	Examples
Arithmetic	+, -, *, /, %
Assignment	=, +=, -=
Comparison	==, !=, >, <
Logical	&&,

✅ Unary Operator
Works on one operand.

cpp
Copy
Edit
int a = 5;
a++; // Post-increment: now a = 6
--a; // Pre-decrement: now a = 5
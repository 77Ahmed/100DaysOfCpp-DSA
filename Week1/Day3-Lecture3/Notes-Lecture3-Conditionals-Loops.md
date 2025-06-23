## 📘 Day 3: Conditional Statements & Loops in C++

### 🧠 What We Learned Today

Today was a really important day because we started learning how to make decisions in code and how to repeat actions automatically using **loops**. Here's everything we understood, step-by-step:

---

## ✅ 1. Conditional Statements – Making Decisions in Code

### 📌 Why they matter:

Sometimes our program needs to behave differently depending on certain situations — like checking if a number is positive or negative, or if a person is allowed to vote. For that, we use **if, else if, else**.

---

### ➤ `if` Statement

Runs a block of code **only if** a condition is true.

```cpp
int age = 20;

if (age >= 18) {
    cout << "You are an adult." << endl;
}
```

🧠 **Explanation**: If `age` is 18 or more, the message is shown. If not, nothing happens.

---

### ➤ `if...else` Statement

Gives an **alternative** path if the condition is false.

```cpp
int age = 15;

if (age >= 18) {
    cout << "You can vote." << endl;
} else {
    cout << "You are too young to vote." << endl;
}
```

🧠 Now our program can respond in both cases — whether the condition is true or false.

---

### ➤ `else if` Ladder

Used when we have **multiple conditions** to check.

```cpp
int number = 0;

if (number > 0) {
    cout << "Positive number" << endl;
} else if (number < 0) {
    cout << "Negative number" << endl;
} else {
    cout << "It's zero" << endl;
}
```

🧠 This way, the program checks conditions one by one until one matches.

---

### ➤ Nested `if` Statements

We can put `if` statements **inside other ifs** for more specific checks.

```cpp
int score = 85;

if (score >= 50) {
    if (score >= 80) {
        cout << "Excellent!" << endl;
    } else {
        cout << "You passed!" << endl;
    }
} else {
    cout << "Better luck next time." << endl;
}
```

🧠 This allows more detailed conditions inside broader ones.

---

## ✅ 2. Ternary Operator (Short `if...else`)

This is a shortcut for simple `if...else` logic that returns a value.

```cpp
int marks = 90;
string result = (marks >= 50) ? "Passed" : "Failed";
cout << result;
```

🧠 Great for quick decisions in a single line.

---

## 🔁 3. Loops – Repeating Code Automatically

### 📌 Why Loops Matter:

Imagine needing to print numbers from 1 to 100. Without loops, you’d have to write 100 lines! Loops help us **repeat** code easily and save time.

---

### ➤ `while` Loop

* Runs code **while** a condition is true.
* Checks the condition **before** running.

```cpp
int i = 1;

while (i <= 5) {
    cout << i << " ";
    i++;
}
// Output: 1 2 3 4 5
```

---

### ➤ `for` Loop

* Best when you know **how many times** to loop.
* Has 3 parts: `start`, `stop`, `change`.

```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
// Output: 1 2 3 4 5
```

---

### ➤ `do...while` Loop

* Runs the code **at least once**, then checks the condition.

```cpp
int i = 1;

do {
    cout << i << " ";
    i++;
} while (i <= 5);
```

---

### ➤ Nested Loops

* A loop inside another loop.
* Useful for printing tables, patterns, and grids.

```cpp
for (int row = 1; row <= 3; row++) {
    for (int col = 1; col <= 3; col++) {
        cout << "(" << row << "," << col << ") ";
    }
    cout << endl;
}
```

---

## 💭 Summary of What We Understood Today

✅ We can use `if`, `else if`, and `else` to make our program respond differently to different inputs.

✅ We learned the ternary operator `? :` to write small `if-else` logic in one line.

✅ We understood how to use **loops** to repeat code efficiently:

* `for` → known number of repeats
* `while` → repeat while a condition is true
* `do...while` → runs at least once

✅ We practiced **nesting**: putting conditions or loops inside others to create more advanced logic.

---

## 🧠 Practice Example

Print numbers from 1 to N, and say whether each number is even or odd.

```cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            cout << i << " is Even" << endl;
        } else {
            cout << i << " is Odd" << endl;
        }
    }

    return 0;
}
```

---


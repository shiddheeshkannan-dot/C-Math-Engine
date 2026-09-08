# 🧮 C Math Engine

A command-line scientific calculator written in **C** using functions and the standard `math.h` library.

## ✨ Features

* Addition `+`
* Subtraction `-`
* Multiplication `*`
* Division `/`
* Modulus `%`
* Power `^`
* Sine `sin`
* Cosine `cos`
* Square root `sqrt`
* Natural logarithm `log`
* Division-by-zero protection
* Square-root validation for negative numbers
* Logarithm validation for non-positive numbers

## 🛠️ Concepts Used

This project helped me practice:

* C functions
* Function prototypes
* `if / else if / else`
* Character input with `scanf`
* `double` data types
* Return values
* Mathematical functions
* `math.h`
* Error handling
* Modular programming

## 🚀 How to Run

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/C-Scientific-Calculator.git
```

### 2. Enter the project folder

```bash
cd C-Scientific-Calculator
```

### 3. Compile

Using GCC:

```bash
gcc calculator.c -o calculator -lm
```

### 4. Run

```bash
./calculator
```

On Windows:

```bash
calculator.exe
```

## 💻 Example

```text
Enter the mathematical operator [+,-,*,/,%,^]: ^
Enter Number 1: 5
Enter Number 2: 2

Result = 25.00

Do you want to perform another operation on the result? [y/n]: y

Choose [s = sin, c = cos, q = square root, l = log]: q
New Result = 5.00
```

## 📚 What I Learned

Through this project, I practiced breaking a program into separate functions instead of putting all calculations inside `main()`.

This is one of my early C projects as I continue learning C programming for embedded systems, hardware and future engineering projects.

## 📌 Future Improvements

* Add a continuous calculator loop
* Add more scientific functions
* Add input validation
* Add factorial
* Add degree/radian mode
* Improve the user interface
* Separate functions into `.c` and `.h` files
* Add a calculation history

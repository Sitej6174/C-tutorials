### <p align="center">📘 C & C++ Tutorials Projects </p>


A hands-on collection of **C** and **C++** programs covering fundamental programming concepts, pattern printing, algorithms, and mini simulations. Ideal for students and beginners learning the C/C++ programming languages from scratch.

---

## 📂 File Descriptions

### 🔵 Core C Files

| File | Description | Key Concepts |
|------|-------------|--------------|
| `C.c` | General-purpose C practice file covering basic language constructs | Variables, data types, input/output, operators |
| `CS1.c` | Introductory CS1-level exercises — the kind typically assigned in first-semester programming courses | Conditionals, basic loops, formatted output |
| `Cnotes.c` | Annotated code that doubles as study notes — code with comments explaining each construct as it is introduced | Syntax reference, inline documentation |
| `main.c` | Entry-point template and driver code; useful as a starting skeleton for new C programs | `main()` structure, return values, basic I/O |
| `instructions.c` | Step-by-step instructional code walking through a concept or problem in a guided, tutorial style | Structured problem-solving, beginner walkthroughs |
| `test.c` | Scratch/sandbox file for quick experiments and trying out ideas | Miscellaneous testing, prototyping |

### 📅 Logic & Real-World Programs

| File | Description | Key Concepts |
|------|-------------|--------------|
| `Day.c` | Determines the day of the week or performs day-based calendar calculations | Modular arithmetic, switch-case, date logic |
| `months.c` | Displays month names, days in each month, or performs month-based calendar logic | Arrays, switch-case, conditionals |
| `Voting.c` | Simulates a basic voting system — accepts votes for candidates and announces a winner | Arrays, loops, comparison logic, input validation |
| `bignumber.c` | Performs arithmetic (addition, multiplication, etc.) on very large integers that exceed standard data type limits | Arrays as digit stores, carry logic, string manipulation |

### 🔢 Algorithms & Math

| File | Description | Key Concepts |
|------|-------------|--------------|
| `primenumbw2.c` | Checks whether numbers are prime and prints prime numbers within a range | Loops, modulus operator, optimized trial division |

### 🎨 Pattern Printing

| File | Description | Key Concepts |
|------|-------------|--------------|
| `star.c` | Prints various star (`*`) patterns such as triangles, pyramids, diamonds, and more | Nested loops, loop control, spacing logic |
| `swastik.c` | Draws a swastik (an ancient symmetric symbol) using characters on the console | Coordinate logic, nested loops, conditional printing |

### 🟡 C++ Files

| File | Description | Key Concepts |
|------|-------------|--------------|
| `Fp.cpp` | Demonstrates the use of function pointers and/or file pointers in C++ | `fstream`, function pointers, C++ I/O |
| `c++/` | Folder containing additional C++ programs and examples | OOP basics, classes, C++ syntax |

### 📁 Folders

| Folder | Description |
|--------|-------------|
| `Demos/` | Demo programs used for walkthroughs, classroom examples, or quick feature showcases |
| `c++/` | C++ specific programs and exercises beyond the root-level `.cpp` files |

---
## 📂 Repository Structure

```
C-tutorials/
├── Demos/              # Demo programs and experiments
├── c++/                # C++ specific examples
├── C.c                 # General C practice
├── CS1.c               # CS1 level exercises
├── Cnotes.c            # Annotated notes in C
├── Day.c               # Day-based programs (e.g. day of week logic)
├── Fp.cpp              # File/function pointer examples in C++
├── Voting.c            # Voting system simulation
├── bignumber.c         # Big number handling in C
├── instructions.c      # Instruction/tutorial style code
├── main.c              # Entry-point examples
├── months.c            # Month-related programs
├── primenumbw2.c       # Prime number algorithms
├── star.c              # Star pattern printing
├── swastik.c           # Swastik pattern using C
└── test.c              # Test/scratch programs
```

---

## 🛠️ Topics Covered

### C Programming
- **Input / Output** — `printf`, `scanf`, formatted output
- **Data Types & Variables** — `int`, `float`, `char`, `long`, type casting
- **Operators** — arithmetic, relational, logical, bitwise, modulus
- **Control Flow** — `if`, `else if`, `else`, `switch-case`
- **Loops** — `for`, `while`, `do-while`; loop nesting and break/continue
- **Functions** — declaration, definition, return types, recursion
- **Arrays** — 1D/2D arrays, array traversal, arrays as digit buffers
- **Pattern Printing** — nested loop logic, coordinate-based printing
- **Math & Algorithms** — prime checking, big number arithmetic
- **Simulations** — voting systems, calendar/day logic

### C++ Programming
- **File I/O** — `fstream`, reading and writing files
- **Function Pointers** — declaring and invoking functions via pointers
- **OOP Basics** — classes, objects, member functions (in `c++/` folder)

---

## 🚀 Getting Started

### Prerequisites

Make sure you have a C/C++ compiler installed:

```bash
gcc --version   # for C files
g++ --version   # for C++ files
```

If not installed (Ubuntu/Debian):

```bash
sudo apt update && sudo apt install build-essential
```

### Compiling & Running

**For `.c` files:**
```bash
gcc filename.c -o output && ./output
```

**For `.cpp` files:**
```bash
g++ filename.cpp -o output && ./output
```

**Examples:**
```bash
gcc star.c -o star && ./star
gcc primenumbw2.c -o primes && ./primes
gcc Voting.c -o voting && ./voting
g++ Fp.cpp -o fp && ./fp
```

---

## 🤝 Contributing

Contributions are welcome! Feel free to:
- Add new tutorial programs with comments
- Improve existing code with better explanations
- Fix bugs or compilation warnings

Open a pull request or raise an issue to get started.

---

## 👤 Author

**Sitej** — [@Sitej6174](https://github.com/Sitej6174)

---

## 📄 License

This project is open source and available for educational use.

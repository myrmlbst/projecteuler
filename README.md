# Project Euler Solutions

## About Project Euler
Project Euler (named after Leonhard Euler) is a website dedicated to a series of challenging mathematical/computational problems intended to be solved with computer algorithms. One new problem of varying difficulty is added to the database approximately every week. The solutions for problems at Project Euler generally consist of two parts:

- **Part 1:** Finding a mathematical method to break down the problem's structure into its elements
- **Part 2:** Developing an efficient algorithm to apply said mathematical concept and solve the problem

## Why Project Euler?
I personally chose Project Euler for two reasons: to _further develop my mathematical reasoning and logic_, and to _expand my knowledge on computer algorithms_ that are less common or not taught to computer science undergrad students.

## Repository Contents
- **Solutions:** `solutions/1-100/` contains C++ solutions for problems 1 through 100.

## Build and Run (C++)
### Manual (Direct Compile):
From the repository root, compile a solution and run it:
```bash
# compile, run, place executable inside .build/
g++ -std=c++17 -O2 -Wall -Wextra solutions/1-100/001.multiplesOf3Or5.cpp -o 001
./001
```
If you prefer to place the executable next to the source file:
```bash
# compile, run, place executable at the same level as the source file
g++ -std=c++17 -O2 -Wall -Wextra solutions/1-100/001.multiplesOf3Or5.cpp -o solutions/1-100/001
./solutions/1-100/001
```

### Helper Scripts:
- **Run a solution:** `bin/euler` compiles a solution and runs it.
- **Measure execution time:** `bin/exec_time` compiles and runs a solution, then displays the execution time in milliseconds.
```bash
# run by problem number
bin/exec_time 001
bin/exec_time 006

# run using file path
bin/exec_time solutions/1-100/001.multiplesOf3Or5.cpp
```

- **Clean build artifacts:** `bin/clean_build` removes everything inside `.build/`.
```bash
# delete generated executables stored inside .build/
chmod +x bin/clean_build
bin/clean_build
```

## Naming Conventions
- **File Names:** `NNN.problemName.cpp` where `NNN` is the zero-padded Project Euler problem number.
- **Directory Structure:** Solutions are organized in `solutions/1-100/` by problem number.

## Notes
- **Inputs:** Most Project Euler problems are self-contained. Solutions typically print the final answer to stdout.
- Due to Project Euler's rules, the walkthroughs and explanations are provided solely for exercises 1 through 100.
- **Disclaimer:** Project Euler encourages solving problems yourself. These solutions are only provided for learning purposes and for comparisons.
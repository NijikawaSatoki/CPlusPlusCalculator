# CPlusPlusCalculator
A multi-function calculator written in C++ designed to run in the terminal.\
It currently supports addition, subtraction, multiplication, division, and modulus.
## Installation
Simply grab the code files under your locale of choice and compile them into a functional executable.\
**NOTE FOR CYGWIN AND MSYS2 USERS:** Unfortunately, the only locale that will work correctly is en-US, due to Windows having really terrible UTF-8 support in terminal shells.
### Compiling
This code can be compiled with your compiler of choice. (You need to be in the directory where you placed the code!)\
For GCC users:\
`$ g++ CalculatorMain.cpp Calculator.cpp -o Calculator -Wall`\
For Clang users:\
`$ clang++ CalculatorMain.cpp Calculator.cpp -o Calculator`
## Running
After the code is compiled with your compiler of choice, just enter into the terminal:\
`$ ./Calculator`\
Have fun doing math!
## To-Do List
- [x] Add functionality for exponentiation calculations
- [ ] Add functionality for square root and cube root calculations
- [ ] Add functionality for floor and ceiling calculations
- [ ] Add functionality for trigonometric calculations
- [ ] Add functionality for calculating absolute value
- [ ] Add more locales

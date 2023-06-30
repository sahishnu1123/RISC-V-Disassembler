# RISC-V Disassembler

This project was done as part of **Course CS2233** which was organized by **Dr. Rajesh Kedia** which aims to develop a Disassembler which converts given **RISC-V machine code** to **RISC-V instructions**


## Authors

- [@sahishnu1123](https://www.github.com/sahishnu1123)


## Tech Stack

**Command Line:** C++



## Prerequisite
Check if g++ compiler exists for compiling the C++ code:

    g++ --version

## Installation and Usage 

### Installing project

Clone from repo:

    git clone https://github.com/sahishnu1123/RISC-V-Disassembler/

### Running the Program

After cloning is done redirect control to project folder using:

    cd RISC-V-Disassembler

Compile the code using:

    g++ -o Disassembler Disassebler.cpp

To run the application:

    ./Disassembler

## Features

- Given a **8 digit HEX RISC-V machine code** the corresponding **RISC-V instruction** is generated 

### Example 
#### Input 
    007201b3
    00720863
    00c0006f
    00533623 
    100004b7 
    00c50493

#### Output
    0: (L7): add x3, x4, x7 
    4: beq x4, x7, L1
    8: jal x0, L1
    c: sd x5, 12(x6)
    10: lui x9, 0x10000
    14: (L1): addi x9, x10, 12

- Sample Test cases can be found in the files **inputs.txt, inputs1.txt**.

## Documentation

For the documentation of the project, please check the pdf file *report.pdf*

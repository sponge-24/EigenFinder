# Eigenvalue Calculator for Square Matrices

This C program calculates the eigenvalues of square matrices. It supports 2x2 and 3x3 matrices and computes eigenvalues using characteristic polynomial equations.

## Table of Contents

- [Overview](#overview)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Code Explanation](#code-explanation)

## Overview

The program performs the following tasks:
1. **Matrix Input**: Accepts a square matrix of size 2x2 or 3x3 from the user.
2. **Trace Calculation**: Computes the trace of the matrix.
3. **Determinant Calculation**: Computes the determinant of the matrix.
4. **Eigenvalue Calculation**: Calculates eigenvalues based on the matrix size (2x2 or 3x3).

## Requirements

- C Compiler

## Installation

1. Save the C code to a file, e.g., `eigenvalue_calculator.c`.

2. Compile the code using a C compiler. For example, using GCC:

    ```bash
    gcc eigenvalue_calculator.c -o eigenvalue_calculator -lm
    ```

    The `-lm` flag is used to link the math library.

## Usage

1. Run the compiled program:

    ```bash
    ./eigenvalue_calculator
    ```

2. Follow the on-screen prompts to enter the size of the matrix (2 or 3), and then input the matrix elements.

3. The program will display the matrix, its trace, determinant, and eigenvalues.

## Code Explanation

### Main Program

- **Matrix Input**: Prompts the user to enter the size and elements of the matrix.
- **Matrix Display**: Prints the matrix to the console.
- **Trace Calculation**: Computes the sum of the diagonal elements.
- **Determinant Calculation**: Calculates the determinant for 2x2 and 3x3 matrices.
- **Eigenvalue Calculation**: Determines the characteristic polynomial and eigenvalues for the matrix size.

### Eigenvalue Functions

- **`eigen2`**: Calculates eigenvalues for 2x2 matrices using the quadratic formula.
- **`eigen3`**: Calculates eigenvalues for 3x3 matrices using the cubic polynomial equation.

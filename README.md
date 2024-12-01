# Grayscale Image Conversion using C and x86 Assembly

## Project Overview
This project demonstrates the conversion of grayscale image pixel values from 8-bit unsigned integers to double-precision floating-point numbers. The implementation leverages a combination of C for input/output handling and memory allocation, and x86 Assembly for the conversion calculations using SIMD instructions. 

The program also evaluates the performance of the assembly function for different image sizes, showcasing the efficiency of SIMD operations.

---

## Features
1. **Input Handling:** Accepts grayscale image dimensions and pixel values in integer format.
2. **Conversion Functionality:** Implements `imgCvtGrayIntToDouble()` in x86 assembly for efficient data type conversion.
3. **Performance Timing:** Measures execution time for three standard image sizes (`10x10`, `100x100`, and `1000x1000`) by averaging results over 30 iterations.
4. **Output Validation:** Displays the converted floating-point values in a 2D format for correctness verification.

---

## Files
- **`main.c`:**
  - Contains the main program written in C.
  - Handles input, memory allocation, function calls to the assembly routine, and output display.
  - Measures execution time for assembly function.

- **`asmfunc.asm`:**
  - Implements the `imgCvtGrayIntToDouble()` function.
  - Utilizes SIMD scalar floating-point instructions for data type conversion.

---
## Youtube video presentation
- https://youtube.com/watch?v=7XDzwXpDJXA&si=rV-_VaLjJSaRdsmU
---

## Acknowledgements
- Developed by Balderosa, Ernest & Salvador, Brianna

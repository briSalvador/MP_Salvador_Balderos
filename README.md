# Grayscale Image Conversion using C and x86 Assembly

## Acknowledgements
- Developed by Balderosa, Ernest & Salvador, Brianna
- Section S14

## Project Overview
This project demonstrates the conversion of grayscale image pixel values from 8-bit unsigned integers to double-precision floating-point numbers. The implementation leverages a combination of C for input/output handling and memory allocation, and x86 Assembly for the conversion calculations using SIMD instructions. 

The program also evaluates the performance of the assembly function for different image sizes, showcasing the efficiency of SIMD operations.

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

## Program Demo
In this section, we will run various test scripts to examine the average execution times for arrays with a height and width of: 10, 100, and 1000 which are case 1, 2 and 3 respectively.

### Case 1
#### Input
```
10 10
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
11, 12, 13, 14, 15, 16, 17, 18, 19, 20
21, 22, 23, 24, 25, 26, 27, 28, 29, 30
31, 32, 33, 34, 35, 36, 37, 38, 39, 40
41, 42, 43, 44, 45, 46, 47, 48, 49, 50
51, 52, 53, 54, 55, 56, 57, 58, 59, 60
61, 62, 63, 64, 65, 66, 67, 68, 69, 70
71, 72, 73, 74, 75, 76, 77, 78, 79, 80
81, 82, 83, 84, 85, 86, 87, 88, 89, 90
91, 92, 93, 94, 95, 96, 97, 98, 99, 100
```

#### Output
```
Time taken to execute: 0.000367 ms
```

#### Screenshots
![image](https://github.com/user-attachments/assets/81bf4965-11ba-438e-be2e-1ff30999c418)
![image](https://github.com/user-attachments/assets/6296b019-07da-4227-ba75-8748497caf5f)

### Case 2
#### Input
```
100 100
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, ...
23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, ...
...
```

#### Output
```
Time taken to execute: 0.023210 ms
```

#### Screenshots
*Some input and output screenshots are ommitted for brevity*
![image](https://github.com/user-attachments/assets/9553a292-335a-486c-a999-7129ea5b79ad)
![image](https://github.com/user-attachments/assets/79b24158-62fe-4206-b7c1-61d1a6fede9b)

### Case 3
#### Input
```
1000 1000
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, ...
23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, ...
...
```

#### Output
```
Time taken to execute: 2.876573 ms
```

#### Screenshots
*Some input and output screenshots are ommitted for brevity*
![image](https://github.com/user-attachments/assets/90705c65-eaae-49ab-b8f3-af5936fa5683)

### Normal Run
#### Input
```
3 4
64,  89,  114, 84
140, 166, 191, 84
216, 242, 38,  84
```

#### Output
```
Height: 3
Width: 4
2D Array:
0.25 0.35 0.45 0.33
0.55 0.65 0.75 0.33
0.85 0.95 0.15 0.33
```

#### Screenshots
![image](https://github.com/user-attachments/assets/44273fdc-1b02-4b54-a5cf-acdd3e62af92)

## Performance Analysis
From the different test scripts we have run, we can see that as the input size grows, so does the time it takes to perform the mapping function for all inputs. As a result of this, the average execution time also becomes slower as shown in the demo screenshots from the previous section. The change in processing speed is only noticeable in very large inputs, namely the array input with a height and width of `1000`. Not only does it take longer for the program to perform the mapping function, but it seems that it also takes significantly longer for the computer to allocate enough memory for very large data sets. This was demonstrated during instances where the terminal would hang after inputting the data set with a height and width of `1000` as shown in the screenshot below.

![image](https://github.com/user-attachments/assets/fafce8af-a084-4462-a574-1bb1fac3e090)

## Youtube video presentation
- 
Ernest Y. Balderosa
Ernest Y. Balderosa
https://youtu.be/Fu-Dvfa8zhc?si=IhdumkJ-avw30jU6

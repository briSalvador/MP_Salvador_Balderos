#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdint.h>
#include <time.h>

extern double imgCvtGrayIntToDouble(uint8_t x);

int main() {
    //INITIALIZE VALUES
    int height = 0;
    int width = 0;
    int toTime = 0;
    int heightWidth = 0;
    double timeRecord[30];
    double averageTime;
    double totalTime = 0;
    LARGE_INTEGER start, end, frequency;

    //GET INPUT
    printf("Instructions: Enter your input separating them with a space after each number.\n");
    printf("Enter your input: ");
    scanf_s("%d %d", &height, &width);

    heightWidth = height * width;

    if (heightWidth == 100 || heightWidth == 10000 || heightWidth == 1000000) {
        toTime = 1;
    }

    int arrSize = height * width;
    uint8_t** arr = (uint8_t**)malloc(height * sizeof(uint8_t*));
    //int* arr = (int*)malloc(arrSize * sizeof(int));

    for (int i = 0; i < height; i++) {
        arr[i] = (uint8_t*)malloc(width * sizeof(uint8_t));
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            scanf_s("%hhu,", &arr[i][j]); // Read integers separated by spaces
        }
    }

    // Allocate memory for answer array
    double** ans = (double**)malloc(height * sizeof(double*));
    for (int i = 0; i < height; i++) {
        ans[i] = (double*)malloc(width * sizeof(double));
    }
    
    if (toTime == 1) {
        QueryPerformanceFrequency(&frequency);
        for (int x = 0; x < 30; x++) {
            QueryPerformanceCounter(&start);

            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    ans[i][j] = imgCvtGrayIntToDouble(arr[i][j]);
                }
            }

            QueryPerformanceCounter(&end);
            totalTime += (double)(end.QuadPart - start.QuadPart) * 1000.0 / frequency.QuadPart;
            timeRecord[x] = (double)(end.QuadPart - start.QuadPart) * 1000.0 / frequency.QuadPart;
        }

        averageTime = totalTime / (double) 30;

        printf("\nTime taken to execute: %lf ms\n", averageTime);

    }
    else {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                ans[i][j] = imgCvtGrayIntToDouble(arr[i][j]);
            }
        }
    }
    

    // FOR TESTING
    printf("\n");
    printf("Height: %d\n", height);
    printf("Width: %d\n", width);
    printf("2D Array:\n");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%.2lf ", ans[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < height; i++) {
        free(arr[i]);
    }
    free(arr);

    for (int i = 0; i < height; i++) {
        free(ans[i]);
    }
    free(ans);

    
    // For Checking
    if (toTime == 1) {
        
        double timeRecordSum = 0; 
        
        printf("\nExecution Time log: ");
        printf("The average time was taken by running the program 30 times.\n");
        for (int i = 0; i < 30; i++) {
            printf("(%d): %lf ms \n", i + 1, timeRecord[i]);
            timeRecordSum += timeRecord[i]; 
        }

        //PURELY FOR CHECKING
        //printf("\nsum1: %lf; sum2: %lf", totalTime, timeRecordSum);
        printf("\nTime taken to execute: %lf ms\n", averageTime);
    }


    /*for (int i = 0; i < arrSize; i++) {
        scanf_s("%d", &arr[i]);
    }*/

    //FOR TESTING VALUES ENTERED ONLY, UNCOMMENT AS NEEDED
    //printf("\n height: %d", height);
    //printf("\n width: %d", width);
    /*printf("You entered: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }*/

    return 0;
}
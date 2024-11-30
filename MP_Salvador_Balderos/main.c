#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdint.h>

extern double imgCvtGrayIntToDouble(uint8_t x);

int main(){
    //INITIALIZE VALUES
    int height = 0;
    int width = 0;

    //GET INPUT
    printf("Instructions: Enter your input separating them with a space after each number.\n");
    printf("Enter your input: ");
    scanf_s("%d %d", &height, &width);

    int arrSize = height * width;
    uint8_t** arr = (uint8_t**)malloc(height * sizeof(uint8_t*));
    //int* arr = (int*)malloc(arrSize * sizeof(int));

    for (int i = 0; i < height; i++) {
        arr[i] = (uint8_t*)malloc(width * sizeof(uint8_t));
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            scanf_s("%hhu", &arr[i][j]); // Read integers separated by spaces
        }
    }

    // Allocate memory for answer array
    double** ans = (double**)malloc(height * sizeof(double*));
    for (int i = 0; i < height; i++) {
        ans[i] = (double*)malloc(width * sizeof(double));
    }
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            ans[i][j] = imgCvtGrayIntToDouble(arr[i][j]);
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
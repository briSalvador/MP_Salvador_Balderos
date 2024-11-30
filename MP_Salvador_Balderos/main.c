#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdint.h>

int main(){
    //INITIALIZE VALUES
    int height = 0;
    int width = 0;

    //GET INPUT
    printf("Instructions: Enter your input separating them with a space after each number.\n");
    printf("Enter your input: ");
    scanf_s("%d %d", &height, &width);

    int arrSize = height * width;
    int** arr = (int**)malloc(height * sizeof(int*));
    //int* arr = (int*)malloc(arrSize * sizeof(int));

    // Allocate memory for each row
    for (int i = 0; i < height; i++) {
        arr[i] = (int*)malloc(width * sizeof(int));
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            scanf_s("%d", &arr[i][j]); // Read integers separated by spaces
        }
    }

    /* FOR TESTING
    printf("Height: %d\n", height);
    printf("Width: %d\n", width);
    printf("2D Array:\n");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    */

    // Free allocated memory
    for (int i = 0; i < height; i++) {
        free(arr[i]);
    }
    free(arr);

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
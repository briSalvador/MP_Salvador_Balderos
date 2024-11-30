#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdint.h>

// extern void testFun();

int main(){
    //testFun();

    //INITIALIZE VALUES
    int height = 0;
    int width = 0;

    //GET INPUT
    printf("Instructions: Enter your input separating them with a space after each number.\n");
    printf("Enter your input: ");
    scanf_s("%d", &height);
    scanf_s("%d", &width);    

    int arrSize = height * width;
    int* arr = (int*)malloc(arrSize * sizeof(int));

    for (int i = 0; i < arrSize; i++) {
        scanf_s("%d", &arr[i]);
    }

    //FOR TESTING VALUES ENTERED ONLY, UNCOMMENT AS NEEDED
    //printf("\n height: %d", height);
    //printf("\n width: %d", width);
    printf("You entered: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
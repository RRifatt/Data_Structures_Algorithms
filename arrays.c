#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Initial array: ");
    printArray(arr, 5);

    arr[2] = 99; // update value
    printf("After update: ");
    printArray(arr, 5);

    return 0;
}
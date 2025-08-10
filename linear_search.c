#include <stdio.h>
int main() {
    int arr[] = {5, 8, 2, 9, 1}, n = 5, key = 9;
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }
    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not found\n");
    return 0;
}
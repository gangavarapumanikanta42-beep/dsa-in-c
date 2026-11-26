#include <stdio.h>

int main() {
    // taking the array
    int arr[5] = {2, 3, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 17;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Found the number\n");
            count++;
            break;
        }
    }

    printf("Updated value of Count: %d\n", count);

    if (count == 0) {
        printf("Num is not found\n");
    }

    return 0;
}
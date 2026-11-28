#include <stdio.h>

int main() {
    int arr[5] = {-54, -64, 12, -698, -99};
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Min is %d\n", min);
    return 0;
}
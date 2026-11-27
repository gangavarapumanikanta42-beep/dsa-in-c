#include <stdio.h>

int main() {
    int arr[5] = {-54, -64, 12, -698, -99};
    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Max is %d\n", max);
    return 0;
}
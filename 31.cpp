#include <stdio.h>

int main() {
	         printf("192211572,S.rohith\n"); 
    int arr[] = {10, 20, 30, 40, 50, 10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("Minimum value sequence: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] == min) printf("%d ", arr[i]);
    }

    printf("\nMaximum value sequence: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] == max) printf("%d ", arr[i]);
    }

    return 0;
}

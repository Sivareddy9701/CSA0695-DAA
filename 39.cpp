#include <stdio.h>

int main() {
	         printf("192211479,E.Leeladhar sai\n"); 
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to be searched: ");
    scanf("%d", &target);

    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            return 0;
        }
    }

    printf("Element %d not found in the array\n", target);

    return 0;
}

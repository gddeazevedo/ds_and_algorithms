#include "./insertion_sort.h"

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j -= 1;
        }

        arr[j + 1] = key;
    }
}

void insertion_sort_example() {
    int arr[] = {5, 2, 4, 6, 1, 3, 49, -9, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
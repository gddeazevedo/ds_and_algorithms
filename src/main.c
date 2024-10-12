#include <stdio.h>
#include "./algorithms/insertion_sort/insertion_sort.h"


int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = 6;
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

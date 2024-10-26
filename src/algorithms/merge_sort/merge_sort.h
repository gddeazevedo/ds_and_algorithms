#ifndef __merge_sort_h
#define __merge_sort_h

#include <stdio.h>
#include <limits.h>

/**
 * Merge two subarrays
 * arr: int[]
 * l: int, left pointer
 * m: int, middle pointer
 * r: int, right pointer
 */
void merge(int arr[], int l, int m, int r);

/**
 * Sorts an array
 * arr: int[]
 * l: int, left pointer
 */
void merge_sort(int arr[], int l, int r);

void merge_sort_example();

#endif // __merge_sort_h
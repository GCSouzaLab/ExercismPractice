#include "binary_search.h"
#include<string.h>
#include<stdlib.h>
    
const int *binary_search(int value, const int *arr, size_t length) {
    if (arr == NULL || length == 0) return NULL;
    
    size_t half = length / 2;
    const int* element = &arr[half];
    
    if (*element == value) {
        return element;
    }

    if (value > *element) {
        size_t right_count = length - half - 1;
        return binary_search(value, arr + half + 1, right_count);
    } else {
        return binary_search(value, arr, half);
    }
}
#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int binary_search(int *array, size_t low, size_t high, int value) {
    if (array == NULL || low > high) {
        return -1;
    }

    size_t mid = low + (high - low) / 2;

    printf("Searching in array: ");
    for (size_t i = low; i <= high; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    if (array[mid] == value) {
        return mid;
    } else if (array[mid] < value) {
        return binary_search(array, mid + 1, high, value);
    } else {
        return binary_search(array, low, mid - 1, value);
    }
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value) {
    return binary_search(array, 0, size - 1, value);
}

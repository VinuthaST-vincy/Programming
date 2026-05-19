#include <bits/stdc++.h>
using namespace std;

// Merge two sorted halves
void merge(int arr[], int left, int mid, int right) {
    int leftSize  = mid - left + 1;
    int rightSize = right - mid;

    // Create temp arrays
    int leftArr[leftSize];
    int rightArr[rightSize];

    // Copy data into temp arrays
    for (int i = 0; i < leftSize; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < rightSize; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // Pick smaller element and place into arr
    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j])
            arr[k++] = leftArr[i++];
        else
            arr[k++] = rightArr[j++];
    }

    // Copy remaining elements
    while (i < leftSize)  arr[k++] = leftArr[i++];
    while (j < rightSize) arr[k++] = rightArr[j++];
}

// Recursively split and sort
void mergeSort(int arr[], int left, int right) {
    if (left >= right) return; // Base case: 1 element

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);       // Sort left half
    mergeSort(arr, mid + 1, right);  // Sort right half
    merge(arr, left, mid, right);    // Merge both halves
}

// Print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before: ";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    std::cout << "After:  ";
    printArray(arr, size);

    return 0;
}

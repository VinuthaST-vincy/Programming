#include <iostream>
using namespace std;

// ALGORITHM Partition(A[l...r])
// // Partitions a subarray by using its first element as a pivot
// // Input : A subarray A[l..r] of A[0..n-1], defined by its left
//            and right indices l and r (l <= r)
// // Output: A partition of A[l..r], with the split position
//            returned as this function's value

int Partition(int A[], int l, int r) {
    int p = A[l];           // p ← A[l]
    int i = l;              // i ← l
    int j = r + 1;          // j ← r+1

    do {
        do { i = i + 1; } while (A[i] >= p);   // repeat i ← i+1 until A[i] >= p
        do { j = j - 1; } while (A[j] <= p);   // repeat j ← j-1 until A[j] <= p

        swap(A[i], A[j]);   // swap A[i] and A[j]

    } while (i < j);        // until i >= j

    swap(A[i], A[j]);       // undo last swap
    swap(A[l], A[j]);       // swap A[l] and A[j]

    return j;               // return j (split position)
}

// QuickSort using the Partition algorithm above
void QuickSort(int A[], int l, int r) {
    if (l < r) {
        int s = Partition(A, l, r);   // s = split position
        QuickSort(A, l, s - 1);       // sort left partition
        QuickSort(A, s + 1, r);       // sort right partition
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    QuickSort(A, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}

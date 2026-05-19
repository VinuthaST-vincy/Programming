#include <iostream>
using namespace std;

// Algorithm: CombineConquer(B[0...p-1], C[0...q-1], A[0...(p+q)-1])
// Purpose : Merges two sorted arrays into 1 sorted array
// Input   : Arrays B & C (sorted)
// Output  : Sorted array A which is the combined result of B & C
void CombineConquer(int B[], int p, int C[], int q, int A[]) {
    int i = 0, j = 0, k = 0;

    while (i < p && j < q) {
        if (B[i] <= C[j]) {
            A[k] = B[i];
            i = i + 1;
        } else {
            A[k] = C[j];
            j = j + 1;
        }
        k = k + 1;
    }

    // if i == p → left subarray exhausted, copy remaining C
    if (i == p) {
        while (j < q) {
            A[k] = C[j];
            j++;
            k++;
        }
    }
    // else → right subarray exhausted, copy remaining B
    else {
        while (i < p) {
            A[k] = B[i];
            i++;
            k++;
        }
    }
}

// Algorithm: MergeSort(A[0...n-1])
// Purpose : Sorts the array A[0...n-1] by recursive merge sort
// Input   : An array A[0...n-1] of orderable elements
// Output  : Array A sorted in increasing order
void MergeSort(int A[], int n) {
    if (n > 1) {
        int mid = n / 2;

        // copy A[0 ... floor(n/2)-1] to B[0 ... floor(n/2)-1]
        int p = mid;
        int B[p];
        for (int x = 0; x < p; x++)
            B[x] = A[x];

        // copy A[floor(n/2) ... n-1] to C[0 ... ceil(n/2)-1]
        int q = n - mid;
        int C[q];
        for (int x = 0; x < q; x++)
            C[x] = A[mid + x];

        MergeSort(B, p);          // MergeSort(B[0...floor(n/2)-1])
        MergeSort(C, q);          // MergeSort(C[0...ceil(n/2)-1])
        CombineConquer(B, p, C, q, A);  // CombineConquer(B, C, A)
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

    MergeSort(A, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}

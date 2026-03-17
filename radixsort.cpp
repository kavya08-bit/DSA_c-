#include <iostream>

int getMax(int A[], int n) {
    int max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max;
}

void countSort(int A[], int n, int exp) {
    int output[100];  // fixed size (like your style)
    int count[10] = {0};

    // Count occurrences
    for (int i = 0; i < n; i++) {
        count[(A[i] / exp) % 10]++;
    }

    // Cumulative count
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build output array
    for (int i = n - 1; i >= 0; i--) {
        int index = (A[i] / exp) % 10;
        output[count[index] - 1] = A[i];
        count[index]--;
    }

    // Copy back
    for (int i = 0; i < n; i++) {
        A[i] = output[i];
    }
}

void radixSort(int A[], int n) {
    int max = getMax(A, n);

    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(A, n, exp);
    }
}

int main() {
    int A[] = {170,45,75,90,802,24,2,66}, n = 8;

    radixSort(A, n);

    for (int i = 0; i < n; i++) {
        std::cout << A[i] << std::endl;
    }
}
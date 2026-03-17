#include <iostream>

struct Node {
    int data;
    Node* next;
};

void insert(Node** bin, int index, int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = NULL;

    if (bin[index] == NULL) {
        bin[index] = temp;
    } else {
        Node* p = bin[index];
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = temp;
    }
}

int deleteNode(Node** bin, int index) {
    Node* temp = bin[index];
    int x = temp->data;
    bin[index] = temp->next;
    delete temp;
    return x;
}

int findMax(int A[], int n) {
    int max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max;
}

void binSort(int A[], int n) {
    int max = findMax(A, n);

    Node** bins = new Node*[max + 1];

    for (int i = 0; i <= max; i++) {
        bins[i] = NULL;
    }

    // Insert elements into bins
    for (int i = 0; i < n; i++) {
        insert(bins, A[i], A[i]);
    }

    // Collect elements back to array
    int i = 0, j = 0;
    while (i <= max) {
        while (bins[i] != NULL) {
            A[j++] = deleteNode(bins, i);
        }
        i++;
    }

    delete[] bins;
}

int main() {
    int A[] = {3,5,6,4,1,2,9,0,7,5}, n = 10;

    binSort(A, n);

    for (int i = 0; i < n; i++) {
        std::cout << A[i] << std::endl;
    }
}
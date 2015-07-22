#include <stdio.h>
#include <stdlib.h>

/*
Merge sort algorithm
Page: 31, 2.3
By: Ben Mezger
*/

void merge(int *A, int p, int q, int r){
    int n_a = q - p + 1;
    int n_b = r - q;

    int L[n_a + 1];
    int R[n_b + 1];

    L[n_a] = 31287739;
    R[n_b] = 31287739;
    
    int i, j, k;

    for (i=0; i < n_a; i++){
        L[i] = A[p + i];
    }
    for (j=0; j < n_b; j++){
        R[j] = A[q + j + 1];
    }

    L[n_a + 1] = -1; // I am assuming all ints are from 0-inf, so I will keep -1 as my sentinel
    R[n_b + 1] = -1; // same as ^
    i = 0;
    j = 0;
    
    for (k=p; k <= r; k++){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i = i + 1;
        }
        else {
            A[k] = R[j];
            j = j + 1;
        }
    }
}

void merge_sort(int *A, int p, int r){
    if (p < r){
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

void printl(int *A, size_t len){
    int i;

    for (i=0; i < (int) len; i++){
        printf("%d, ", A[i]);
    }
    puts("");
}

int main(){
    int A[] = { 10, 8, 6, 4, 2, 1, 3, 5, 7, 9,
                11, 13, 15, 17, 19, 12, 14, 16, 18 };
    size_t len = sizeof(A) / sizeof(A[0]);

    merge_sort(A, 0, (int) len - 1);
    printl(A, len);

    return 0;
}

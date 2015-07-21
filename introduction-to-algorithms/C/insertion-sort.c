#include <stdio.h>

/*
Insertion sort algorithms
Page 16, 2.1
By: Ben Mezger
*/

void printl(int *A, size_t len){
    int i;

    for (i=0; i < (int) len; i++){
        printf("%d, ", A[i]);
    }
    puts("");
}

void insertion_sort(int *A, size_t len){
    int j, i, key;

    for (j=1; j < (int) len; j++){
        key = A[j];
        // Insert A[j] into the sorted sequence A[1.. j-1]
        i = j - 1;
        while (i >= 0 && A[i] > key){
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }
}

int main(){
    int A[] = { 5, 2, 4, 6, 1, 3 };
    size_t len = sizeof(A) / sizeof(A[0]);

    insertion_sort(A, len);
    printl(A, len);
}

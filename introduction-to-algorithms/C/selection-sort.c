#include <stdio.h>

/*
Selection sort algorithm
Page: 29, from the exercice 2.2-2
By: Ben Mezger
*/

void printl(int *A, size_t len){
    int i;

    for (i=0; i < (int) len; i++){
        printf("%d, ", A[i]);
    }
    puts("");
}

void selection_sort(int *A, size_t len){
    int i, j, index, tmp;

    for (i=0; i < (int) len; ++i){
        index = i;
        for (j=i; j < (int) len; ++j){
            if (A[j] < A[index]){
                index = j;
            }
        }
        tmp = A[index];
        A[index] = A[i];
        A[i] = tmp;
    }
}

int main(){
    int A[] = { 3, 1, 6, 2, 4, 5 };
    int B[] = { 88, 1, 23, 4, 90, 100, 12, 34, 77 };
    size_t len_a = sizeof(A) / sizeof(A[0]);
    size_t len_b = sizeof(B) / sizeof(B[0]);

    selection_sort(A, len_a);
    selection_sort(B, len_b);

    printf("A: ");
    printl(A, len_a);

    printf("B: ");
    printl(B, len_b);

    return 0;
}

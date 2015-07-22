#include <stdio.h>

/*
Selection sort algorithm exercice
Page: 29, 2.3
Exercice: 2.2-2
By: Benjamin Mezger
*/

void selection_sort(int *A, size_t len){
    int i, j, index;
    int tmp;
    
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

void printl(int *A, size_t len){
    int i;

    for (i=0; i < (int) len; i++){
        printf("%d, ", A[i]);
    }
    puts("");
}

int main(){
    int A[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
    int B[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    size_t len = sizeof(A) / sizeof(A[0]);

    selection_sort(A, len);
    selection_sort(B, len);

    printf("A: ");
    printl(A, len);

    printf("B: ");
    printl(B, len);

    return 0;
}

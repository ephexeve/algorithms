#include <stdio.h>

/*
Insertion sort algorithm exercice
Page: 22, 2.1
Exercice: 2.1-1
By: Ben Mezger
*/

void insertion_sort(int *A, size_t len){
    int j, i, key;

    for (j=1; j < (int) len; j++){
        key = A[j];
        i = j - 1;
        
        while (i >= 0 && A[i] > key){
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
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
    int A[] = { 31, 41, 59, 26, 41, 58 };
    size_t len = sizeof(A) / sizeof(A[0]);

    insertion_sort(A, len);
    printl(A, len);

    return 0;
}

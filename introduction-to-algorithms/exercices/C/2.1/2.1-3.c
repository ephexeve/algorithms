#include <stdio.h>

/*
Insertion sort algorithm exercice
Page: 22, 2.1
Exercice: 2.1-3
By: Ben Mezger
*/

int search(int *A, size_t len, int v){
    int i = 0;
    
    while (i < (int) len){
        if (A[i] == v){
            return i; 
        }
        i++;
    }
    return -1;
}

int main(){
    int A[] = { 23, 53, 12, 56, 3, 12, 68 };
    size_t len = sizeof(A) / sizeof(A[0]);
    int value_a = 12;
    int value_b = 80;
    
    int index_a = search(A, len, value_a);
    int index_b = search(A, len, value_b);
    
    if (index_a >= 0){
        printf("A: Found value %d at index %d\n", value_a, index_a);
    }
    else {
        puts("A: No value was found.\n");
    }

    if (index_b >= 0){
        printf("B: Found value %d at index %d\n", value_b, index_b);
    }
    else {
        puts("B: No value was found.\n");
    }
    
    return 0;
}

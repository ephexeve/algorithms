#include <stdio.h>

/*
Insertion sort algorithm exercice
Page: 22-23, 2.1
Exercice: 2.1-4
By: Ben Mezger
*/

/*
Our settings:
| A[0] | ... | A[n] |          |
| B[0] | ... | B[n] |          |
| C[0] | ... | C[n] | C[n + 1] |

Let carry = 0 initially, then we have;
	C[1] = (A[1] + B[1] + carry) % 2
    key = (A[1] + B[1] + carry) / 2

Generally, the following equations hold;
	C[i] = (A[i] + B[1] + carry) % 2
    carry = (A[i] + B[i] + carry) / 2
    C[n + 1] = carry
*/

void sum(int *A, int *B, int *C, size_t len){
    int carry = 0;
    int i;

    for (i=0; i < (int) len; i++){
        C[i] = (A[i] + B[i] + carry) % 2; // remainder
        carry = (A[i] + B[i] + carry) / 2; //quotient
    }
    C[len] = carry;
}

void printl(int *C, size_t len){
    int i;

    for (i=0; i < (int) len; i++){
        printf("%d, ", C[i]);
    }
    puts("");
}

int main(){
    int A[] = { 1011, 1100, 0011, 1010, 1111};
    int B[] = { 1001, 1011, 1101, 0101, 11001 };
    int C[5];

    size_t len = sizeof(A) / sizeof(A[0]);

    sum(A, B, C, len);
    printl(C, len);
    
    return 0;
}

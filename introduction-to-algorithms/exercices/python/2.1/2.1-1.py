#!/usr/bin/python2

# Insertion sort algorithm exercice
# Page: 22, 2.1
# Exercice: 2.1-1
# By: Ben Mezger

def insertion_sort(A):
    for j in range(len(A)):
        key = A[j]
        i = j - 1

        while i >= 0 and A[i] > key:
            A[i + 1] = A[i]
            i = i - 1
        A[i + 1] = key
    return A

A = [31, 41, 59, 26, 41, 58]
A = insertion_sort(A)

print A

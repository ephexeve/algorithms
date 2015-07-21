#!/usr/bin/python2

# Insertion sort algorithm
# Page 16, 2.1
# By: Ben Mezger

A = [5, 2, 4, 6, 1, 3]

for j in range(len(A)):
    key = A[j]
    i = j - 1

    while (i >= 0 and A[i] > key):
        A[i + 1] = A[i]
        i = i - 1
    A[i + 1] = key

print A

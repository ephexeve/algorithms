#!/usr/bin/python2

# Insertion sort algorithm exercise
# Page: 22, 2.1
# Exercice: 2.1-3
# By: Ben Mezger

def search(A, v):
    i = 0

    while (i < len(A)):
        if (A[i]  == v):
            return i
        i += 1
    return -1

A = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
B = [90, 23, 5, 68, 12, 100, 5213, 12]

index_a = search(A, 8)
index_b = search(B, 0000)

print "A: index", index_a
print "B: index", index_b

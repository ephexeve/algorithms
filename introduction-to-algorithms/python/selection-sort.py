#!/usr/bin/python2

# Selection sort algorithm
# Page 29, from the exercice 2.2-3
# By: Ben Mezger

from random import shuffle

A = range(7)
B = range(100)

shuffle(A)
shuffle(B)

print "Old A:", A
print "Old B:", B

def selection_sort(a_list):
    lenght = len(a_list)

    for i in range(lenght):
        i = i - 1
        index = i
        for j in range(i, lenght):
            # j = j - 1
            if a_list[j] < a_list[index]:
                index = j

        tmp = a_list[index]
        a_list[index] = a_list[i]
        a_list[i] = tmp

    return a_list


print
print "New A:", selection_sort(A)
print "New B:", selection_sort(B)

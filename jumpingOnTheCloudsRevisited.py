#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c, k):
    e = 100
    ctr = 0
    i=0
    while ctr==0:
        temp = (i+k)%len(c)
        if c[temp]==0:
            e = e-1
        else:
            e=e-1-2

        i=i+k

        if temp==0:
            ctr=1

    return e

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c, k)

    fptr.write(str(result) + '\n')

    fptr.close()

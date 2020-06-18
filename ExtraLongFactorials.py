#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the extraLongFactorials function below.
def extraLongFactorials(n):
    res = 1
    while(n>0):
        res = res*n;
        n = n-1;

    print(res)


if __name__ == '__main__':
    n = int(input())

    extraLongFactorials(n)

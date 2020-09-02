#!/bin/python3

import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    s1 = s.split(":")
    res = ""
    h=""
    if "12" in s1[0] and "AM" in s1[2]:
        h = "00"
        res = h+":"+s1[1]+":"+s1[2].strip("AM")
    elif "PM" in s1[2]:
        h = str(int(s1[0])+12)
        if h=="24":
            h="12"
        res = h+":"+s1[1]+":"+s1[2].strip("PM")
    else:
        res = s.strip("AM")

    return res

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    f.write(result + '\n')

    f.close()

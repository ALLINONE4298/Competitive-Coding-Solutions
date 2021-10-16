#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'breakingRecords' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY scores as parameter.
#

def breakingRecords(scores):
    lo = scores[0]
    hi = scores[0]
    lob = 0
    hib = 0
    for i in range(1,len(scores)):
        if scores[i] < lo:
            lob += 1
            lo = scores[i]
        if scores[i] > hi:
            hib += 1
            hi = scores[i]
    return [hib, lob]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

import math
import os
import random
import re
import sys


def breakingRecords(scores):
    min = max = scores[0]
    min_count = max_count = 0
    for i in scores[1:]:
        if i > max:
            max_count += 1
            max = i
        if i < min:
            min_count += 1
            min = i
    return max_count, min_count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

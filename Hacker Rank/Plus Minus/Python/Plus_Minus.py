import math
import os
import random
import re
import sys


def plusMinus(arr):
    neg = 0
    pos = 0
    neutral = 0
    for i in arr:
        if i<0:
            neg += 1
        elif i>0:
            pos += 1
        else:
            neutral += 1 
    print(pos/len(arr))
    print(neg/len(arr))
    print(neutral/len(arr))

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)

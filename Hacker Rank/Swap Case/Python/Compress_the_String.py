from itertools import groupby
k =input()
for c, items in groupby(k):    
    print(tuple([len(list(items)),int(c)]), end=' ')

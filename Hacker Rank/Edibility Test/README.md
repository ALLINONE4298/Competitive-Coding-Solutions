# Edibility Test
Ravi and Kavita have ordered sweets on Independence day. But it was found that some box of sweets were spoilt and had to be discarded. A box of sweets is said to be spoilt if the sum of sweetness of the first half of the box is not equal to the second half of the box of sweets. The number of sweets in a box is always even.

* For example if a set of sweets A = [1,2,3,3,2,1] then the sweets are not spoilt because the sum of the first half of this array is 6, which is same as the sum of the second half. but if A = [1,2,3,4,2,3], then the box is spoilt.

### Input Format:
* The first line of the input contains the number of testcases t.
* The next line of the input contains n, the number of sweets in the box.
* The next line contains n positive integers separated by spaces.

### Constraints:
* 1 <= T <= 100
* 0 <= N <= 10^5
* 1 <= A[i] <= 10^6

### Output Format:
The first and only line of the output will be "SPOILT" (caps)if box is spoilt and "GOOD" otherwise.

### Sample Input:
```
 3
 6
 1 2 3 3 2 1
 4
 2 4 5 1
 2
 1 0
```

### Sample Output:
```
 GOOD
 GOOD
 SPOILT
```

### Explanation:
The sum of the first half and the second of the array [1,2,3,3,2,1] is 1 + 2 + 3 = 3 + 2 + 1 = 6 so it's GOOD. Whereas in the array [1,0] the first half of the array sums upto 1 whereas the second half sums upto 0. So it is definitely spoilt.
# Checksum

### Problem
Grace and Edsger are constructing a N×N boolean matrix A. The element in i-th row and j-th column is represented by Ai,j. They decide to note down the checksum (defined as bitwise XOR of given list of elements) along each row and column. Checksum of i-th row is represented as Ri. Checksum of j-th column is represented as Cj.

For example, if N=2, A=[1101], then R=[10] and C=[01].

Once they finished the matrix, Edsger stores the matrix in his computer. However, due to a virus, some of the elements in matrix A are replaced with −1 in Edsger's computer. Luckily, Edsger still remembers the checksum values. He would like to restore the matrix, and reaches out to Grace for help. After some investigation, it will take Bi,j hours for Grace to recover the original value of Ai,j from the disk. Given the final matrix A, cost matrix B, and checksums along each row (R) and column (C), can you help Grace decide on the minimum total number of hours needed in order to restore the original matrix A?

### Input
The first line of the input gives the number of test cases, T. T test cases follow.

The first line of each test case contains a single integer N.

The next N lines each contain N integers representing the matrix A. j-th element on the i-th line represents Ai,j.

The next N lines each contain N integers representing the matrix B. j-th element on the i-th line represents Bi,j.

The next line contains N integers representing the checksum of the rows. i-th element represents Ri.

The next line contains N integers representing the checksum of the columns. j-th element represents Cj.

### Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum number of hours to restore matrix A.

### Limits
Memory limit: 1 GB.
*1≤T≤100.*
−1≤Ai,j≤1, for all i,j.
1≤Bi,j≤1000, for i,j where Ai,j=−1, otherwise Bi,j=0.
*0≤Ri≤1*, for all i.
*0≤Cj≤1*, for all j.
It is guaranteed that there exist at least one way to replace −1 in A with 0 or 1 such that R and C as satisfied.

* Test Set 1
Time limit: 20 seconds.
*1≤N≤4.*

* Test Set 2
Time limit: 35 seconds.
*1≤N≤40.*

* Test Set 3
Time limit: 35 seconds.
*1≤N≤500.*

### Sample Input
```
3
3
1 -1 0
0 1 0
1 1 1
0 1 0
0 0 0
0 0 0
1 1 1
0 0 1
2
-1 -1
-1 -1
1 10
100 1000
1 0
0 1
3
-1 -1 -1
-1 -1 -1
0 0 0
1 1 3
5 1 4
0 0 0
0 0 0
0 0 0
```

### Sample Output
```
Case #1: 0
Case #2: 1
Case #3: 2
```

### Explanation
In Sample Case #1, A1,2 can be restored using the checksum of either 1-st row or 2-nd column. Hence, Grace can restore the matrix without spending any time to recover the data.

In Sample Case #2, Grace spends one hour to recover A1,1. After that, she can use checksums of 1-st row and 1-st column to restore A1,2 and A2,1 respectively. And then she can use checksum of 2-nd row to restore A2,2. Hence, Grace can restore the matrix by spending one hour.

In Sample Case #3, Grace can spend one hour to recover A1,1 and another hour to recover A2,2. After that, she can use checksum to restore the rest of the matrix. Hence, Grace can restore the matrix by spending two hours in total.
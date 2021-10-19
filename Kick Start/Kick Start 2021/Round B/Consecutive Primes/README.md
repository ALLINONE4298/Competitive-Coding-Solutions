# Consecutive Primes

### Problem
Ada has bought a secret present for her friend John. In order to open the present, Ada wants John to crack a secret code. She decides to give him a hint to make things simple for him. She tells him that the secret code is a number that can be formed by taking the product of two consecutive prime numbers, such that it is the largest number that is smaller than or equal to Z. Given the value of Z, help John to determine the secret code.

Formally, let the order of prime numbers 2,3,5,7,11, ... be denoted by p1,p2,p3,p4,p5, ... and so on. Consider Ri to be the product of two consecutive primes pi and pi+1. The secret code is the largest Rj such that Rj≤Z.

### Input
The first line of the input gives the number of test cases, T. T lines follow.
Each line contains a single integer Z, representing the number provided by Ada as part of the hint.

### Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the secret code - the largest number less than or equal to Z that is the product of two consecutive prime numbers.

### Limits
Time limit: 15 seconds.
Memory limit: 1 GB.
*1≤T≤100.*

* Test Set 1
*6≤Z≤2021.*

* Test Set 2
*6≤Z≤109.*

* Test Set 3
*6≤Z≤1018.*


### Sample Input
```
2
2021
2020
```

### Sample Output
```
Case #1: 2021
Case #2: 1763
```

### Explanation
For Sample Case #1, the secret code is 2021 because it is exactly the product of consecutive primes 43 and 47.

For Sample Case #2, the secret code is 1763 because the product of 41 and 43 is 1763 which is smaller than 2020, but the product of 43 and 47 exceeds the given value of 2020.
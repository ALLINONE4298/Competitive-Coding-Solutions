# Rabbit House

### Problem
Barbara got really good grades in school last year, so her parents decided to gift her with a pet rabbit. She was so excited that she built a house for the rabbit, which can be seen as a 2D grid with R rows and C columns.

Rabbits love to jump, so Barbara stacked several boxes on several cells of the grid. Each box is a cube with equal dimensions, which match exactly the dimensions of a cell of the grid.

However, Barbara soon realizes that it may be dangerous for the rabbit to make jumps of height greater than 1 box, so she decides to avoid that by making some adjustments to the house. For every pair of adjacent cells, Barbara would like that their absolute difference in height be at most 1 box. Two cells are considered adjacent if they share a common side.

As all the boxes are superglued, Barbara cannot remove any boxes that are there initially, however she can add boxes on top of them. She can add as many boxes as she wants, to as many cells as she wants (which may be zero). Help hew determine what is the minimum total number of boxes to be added so that the rabbit's house is safe.

### Input
The first line of the input gives the number of test cases, T. T test cases follow.

Each test case begins with a line containing two integers R and C.

Then, R lines follow, each with C integers. The j-th integer on i-th line, Gi,j, represents how many boxes are there initially on the cell located at the i-th row and j-th column of the grid.

### Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum number of boxes to be added so that the rabbit's house is safe.


### Limits

Memory limit: 1 GB.
*1≤T≤100.*
0≤Gi,j≤2⋅106, for all i, j.

* Test Set 1
Time limit: 20 seconds.
*1≤R,C≤50.*

* Test Set 2
Time limit: 40 seconds.
*1≤R,C≤300.*


### Sample Input
```
3
1 3
3 4 3
1 3
3 0 0
3 3
0 0 0
0 2 0
0 0 0
```

### Sample Output
```
Case #1: 0
Case #2: 3
Case #3: 4
```

### Explanation
In Sample Case #1, the absolute difference in height for every pair of adjacent cells is already at most 1 box, so there is no need to add any extra boxes.

In Sample Case #2, the absolute difference in height of the left-most cell and the middle cell is 3 boxes. To fix that, we can add 2 boxes to the middle cell. But then, the absolute difference of the middle cell and the right-most cell will be 2 boxes, so Barbara can fix that by adding 1 box to the right-most cell. After adding these 3 boxes, the safety condition is satisfied.

In Sample Case #3, the cell in the middle of the grid has an absolute difference in height of 2 boxes with all of its four adjacent cells. One solution is to add exactly 1 box to all of the middle's adjacent cells, so that the absolute difference between any pair of adjacent cells will be at most 1 box. That requires 4 boxes in total.
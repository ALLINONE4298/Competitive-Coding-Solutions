# Breaking the Records

Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.


### Examples
Scores = [12, 24, 10, 24]

Scores are in the same order as the games played. She tabulates her results as follows:

![image](https://user-images.githubusercontent.com/67931219/137580147-dd51e89a-2447-4b7a-a15b-5e1029df5aef.png)

Given the scores for a season, determine the number of times Maria breaks her records for most and least points scored during the season.

### Function Description

Complete the breakingRecords function in the editor below.
breakingRecords has the following parameter(s):

* int scores[n]: points scored per game

### Returns

int[2]: An array with the numbers of times she broke her records. Index 0 is for breaking most points records, and index 1 is for breaking least points records.

### Input Format

The first line contains an integer n, the number of games.
The second line contains n space-separated integers describing the respective values of score0, score1, score2.....score(n-1).

### Constraints
```
* 1 <= n <= 1000
* 0 <= scores[i] <= 10^8
```

### Sample Input 0
```
9 
10 5 20 20 4 5 2 25 1
```

### Sample Output 0
```
2 4
```

### Explanation 0

The diagram below depicts the number of times Maria broke her best and worst records throughout the season:

![image](https://user-images.githubusercontent.com/67931219/137580327-170b8530-8c55-45a7-afce-485a248d6f70.png)

She broke her best record twice (after games 2 and 7) and her worst record four times (after games 1, 6, 4, and 8), so we print 2 4 as our answer. Note that she did not break her record for best score during game 3, as her score during that game was not strictly greater than her best record at the time.

### Sample Input 1
```
10 
3 4 21 36 10 28 35 5 24 42
```

### Sample Output 1
```
4 0
```

### Explanation 1

The diagram below depicts the number of times Maria broke her best and worst records throughout the season:

![image](https://user-images.githubusercontent.com/67931219/137580336-8df848fb-0e21-40d3-8e0e-77d9f7f432d5.png)

She broke her best record four times (after games 1, 2, 3, and 9) and her worst record zero times (no score during the season was lower than the one she earned during her first game), so we print 4 0 as our answer.

# Cost of Ballons
You are conducting a contest at your college. This contest consists of two problems and  participants. You know the problem that a candidate will solve during the contest. You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

* Use green-colored balloons for the first problem and purple-colored balloons for the second problem
* Use purple-colored balloons for the first problem and green-colored balloons for the second problem
* You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.

### Input format
* First line: T that denotes the number of test cases (1<= T <= 10)
* For each test case:
  -> First line: Cost of green and purple-colored balloons
  -> Second line:  that denotes the number of participants (1<= n <= 10)
* Next n lines: Contain the status of users. For example, if the value of the jth integer in the ith row is 0, then it depicts that the ith participant has not solved the jth problem. Similarly, if the value of the jth integer in the ith row is 1, then it depicts that the ith participant has solved the jth problem.

### Output format
For each test case, print the minimum cost that you have to pay to purchase balloons.

// Cost of balloons
// You are conducting a contest at your college. This contest consists of two problems and  participants. You know the problem that a candidate will solve during the contest.

// You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

// Use green-colored balloons for the first problem and purple-colored balloons for the second problem
// Use purple-colored balloons for the first problem and green-colored balloons for the second problem
// You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.

// Input format

// First line: T that denotes the number of test cases (1<= T <= 10)
// For each test case:
//      First line: Cost of green and purple-colored balloons
//      Second line:  that denotes the number of participants (1<= n <= 10)
// Next n lines: Contain the status of users. For example, if the value of the jth integer in the ith row is 0, then it depicts that the ith participant has not solved the jth problem. Similarly, if the value of the jth integer in the ith row is 1, then it depicts that the ith participant has solved the jth problem.
// Output format
// For each test case, print the minimum cost that you have to pay to purchase balloons.

#include <stdio.h>

int main()
{
  int t;
  scanf("%d", &t);
  while (t--){
    int gb_cost, pb_cost, num, cost = 0, Q1[100], Q2[100], num_q1 = 0, num_q2 = 0, i;
    scanf("%d %d", &gb_cost, &pb_cost);
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
      scanf("%d %d", &Q1[i], &Q2[i]);

      if (Q1[i] == 1)
        num_q1++;
      if (Q2[i] == 1)
        num_q2++;
    }

    if (gb_cost > pb_cost)
    {
      if (num_q1 > num_q2)
      {
        cost = cost + (pb_cost * num_q1) + (gb_cost * num_q2);
      }
      else
        cost = cost + (pb_cost * num_q2) + (gb_cost * num_q1);
    }
    else if (pb_cost > gb_cost)
    {
      if (num_q1 > num_q2)
      {
        cost = cost + (gb_cost * num_q1) + (pb_cost * num_q2);
      }
      else
        cost = cost + (gb_cost * num_q2) + (pb_cost * num_q1);
    }
    else{
      cost += (gb_cost * num_q1) + (pb_cost * num_q2);
    }

    printf("%d\n", cost);
  }
  return 0;
}

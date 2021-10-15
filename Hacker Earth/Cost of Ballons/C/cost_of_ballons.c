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

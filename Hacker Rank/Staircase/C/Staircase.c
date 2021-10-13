// Staircase
// Staircase detail

// This is a staircase of size n=4:
//    #
//   ##
//  ###
// #### 

// Its base and height are both equal to n. It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

// Write a program that prints a staircase of size n.
// Function Description

// Complete the staircase function in the editor below.

// staircase has the following parameter(s):
// int n: an integer

// Print
// Print a staircase as described above.

// Input Format
// A single integer, n, denoting the size of the staircase.

// Constraints

// 0 < n <= 100.

// Output Format
// Print a staircase of size n using # symbols and spaces.
// Note: The last line must have 0 spaces in it.

// Sample Input
// 6

// Sample Output
//       #
//      ##
//     ###
//    ####
//   #####
//  ######

//  Explanation

// The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of n=6.

// For e.g.
// n=5
//   0 1 2 3 4
//  ----------
// 0|        #
// 1|      # #
// 2|    # # #
// 3|  # # # #
// 4|# # # # #


// Coding Section

#include <stdio.h>
void staircase(int n) {
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j >= n-1)
              printf("#");
            else
              printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    staircase(n);
    return 0;
}

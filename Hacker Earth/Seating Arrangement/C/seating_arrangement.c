// Akash and Vishal are quite fond of travelling.They mostly travel by railways.
// They were travelling in a train one day and they got interested in the seating arrangement of their compartment.
// The compartment looked something like

//       ___________________________________________________________________
//       |6    7|18    19|30   31|42                         91|102    103|
//       |5    8|17    20|29   32|41                         92|101    104|
//       |4    9|16    21|28   33|40                         93|100    105|

//       |3   10|15    22|27   34|39                         94|99     106|
//       |2   11|14    23|26   35|38                         95|98     107|
//       |1   12|13    24|25   36|37    ...  and so on ...   96|97     108|
//       __________________________________________________________________


// So they got interested to know the seat number facing them and the seat type facing them.The seats are denoted as follows :

// => Window Seat : WS
// => Middle Seat : MS
// => Aisle Seat : AS

// You will be given a seat number,find out the seat number facing you and the seat type, i.e.WS, MS or AS.

// INPUT
// First line of input will consist of a single integer T denoting number of test-cases.
// Each test-case consists of a single integer N denoting the seat-number.

// OUTPUT 
// For each test case,print the facing seat-number and the seat-type, separated by a single space in a new line.

// CONSTRAINTS 
// =>>  (1 <= T <= 10^5)
// =>>  (1 <= N <= 108)

//Coding Section


#include<stdio.h>
#include<string.h>

int main(){
  unsigned int t;
  scanf("%d", &t);

  while(t>0){
    int seat_no,opposite_seat_no;
    char seat_type[3];
    scanf("%d", &seat_no);

    switch (seat_no % 12)
    {
    case 0:
      opposite_seat_no = seat_no - 11;
      strcpy(seat_type, "WS");
      break;
    case 1:
      opposite_seat_no = seat_no + 11;
      strcpy(seat_type, "WS");
      break;
    case 2:
      opposite_seat_no = seat_no + 9;
      strcpy(seat_type, "MS");
      break;
    case 3:
      opposite_seat_no = seat_no + 7;
      strcpy(seat_type, "AS");
      break;
    case 4:
      opposite_seat_no = seat_no + 5;
      strcpy(seat_type, "AS");
      break;
    case 5:
      opposite_seat_no = seat_no + 3;
      strcpy(seat_type, "MS");
      break;
    case 6:
      opposite_seat_no = seat_no + 1;
      strcpy(seat_type, "WS");
      break;
    case 7:
      opposite_seat_no = seat_no - 1;
      strcpy(seat_type, "WS");
      break;
    case 8:
      opposite_seat_no = seat_no - 3;
      strcpy(seat_type, "MS");
      break;
    case 9:
      opposite_seat_no = seat_no - 5;
      strcpy(seat_type, "AS");
      break;
    case 10:
      opposite_seat_no = seat_no - 7;
      strcpy(seat_type, "AS");
      break;
    case 11:
      opposite_seat_no = seat_no - 9;
      strcpy(seat_type, "MS");
      break;
    default:
      break;
    }

    printf("%d %s\n", opposite_seat_no, seat_type);
    t--;
  }
  return 0;
}
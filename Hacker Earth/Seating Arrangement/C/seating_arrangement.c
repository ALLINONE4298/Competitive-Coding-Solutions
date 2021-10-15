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
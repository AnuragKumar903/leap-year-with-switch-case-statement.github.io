#include <stdio.h>

int main(void) {
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);

  // switch case
  switch(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
    case 0:
      printf("%d is not a leap year.", year);
    break;
    case 1:
      printf("%d is a leap year.", year);
  } 
  return 0;
}
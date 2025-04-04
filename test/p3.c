#include <stdio.h>
#include <stdlib.h>

//function to print the selected row of a two-dimensional array
void print_row(int rows, int cols, const int a[rows][cols], int selected_row);

//function to print the selected column of a two-dimensional array
void print_col(int rows, int cols, const int a[rows][cols], int selected_col);

//function that initializes each element in the given two-dimensional array with random numbers in the range [0; 99]
void rand_init(int rows, int cols, int a[rows][cols]);

//function to print a two-dimensional array
void print(int rows, int cols, const int a[rows][cols]);

//function to swap two selected rows
void swap_rows(int rows, int cols, int a[rows][cols], int row1, int row2);


int main(void) {
  srand(10);
  int d[5][3];
  rand_init(5, 3, d);
  print(5, 3, d);
  print_row(5, 3, d, 0);
  print_col(5, 3, d, 1);

  print(5, 3, d);
  swap_rows(5, 3, d, 0, 1);
  print(5, 3, d);
  
  return 0;
}

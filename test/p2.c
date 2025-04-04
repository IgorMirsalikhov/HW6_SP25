#include <stdio.h>

//symbolic constant to set a max size for the string
#define SIZE 1000

//function prototype called text_statistics that calculates statistics on a passed string
void text_statistics(const char *str);

int main(void) {

  char str[SIZE];
  
  // getting a string using the fgets function
  puts("Enter a string: ");
  fgets(str, SIZE - 1, stdin);
  puts("");

  //function call
  text_statistics(str);
  
  return 0;
}

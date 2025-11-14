// array_fail.c
#include <stdio.h>
#include <string.h>

int main() {

  char todos[5][50];

  int counter = 0;

  strcpy(todos[counter++], "Learn C");
  strcpy(todos[counter++], "Build HTTP server");
  strcpy(todos[counter++], "Master pointers");

  printf("Enter a new task: \n");
  fgets(todos[counter], 49, stdin);
  counter++;

  for (int i = 0; i < counter; i++) {
    printf("%d. %s.\n", i + 1, todos[i]);
  };

  return 0;
}

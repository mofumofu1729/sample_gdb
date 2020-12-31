#include <stdio.h>

void swap(int* a, int* b) {
  int tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}

void show_variables(int a, int b) {
  printf("a: %d, b: %d\n", a, b);

}

int main(void) {
  int a = 10;
  int b = 20;

  puts("before swap");
  show_variables(a, b);

  swap(&a, &b);
  puts("after swap");
  show_variables(a, b);
}

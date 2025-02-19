#include <stdio.h>
int main() {
  int t1 = 0;
  int t2 = 1;
  int next = 0;
  int n = 10;
  int cnt = 1;
  printf("The Fibonacci Seies of numbers less than 10 are: %d, %d, ", t1, t2);
  next = t1 + t2;

  while (next <= n) {
    printf("%d, ", next);
    t1 = t2;
    t2 = next;
    cnt +=next;
    next = t1 + t2;
  }

  printf("\nThe Sum of these numbers is %d\n", cnt);
  return 0;
}
#include <stdio.h>

int main() {
  unsigned short i, n;
  int a[40];
  a[1] = a[0] = 1;
  for (i = 2; i < 40; i++) a[i] = a[i - 1] + a[i - 2];
  scanf("%hd", & n);
  while (n--) {
    scanf("%hd", & i);
    printf("%d\n", a[i - 1]);
  }
  return 0;
}

#include <stdio.h>

int bee(int current, int target) {
    if (current == target) return 1;
    if (current > target) return 0;
    return bee(current + 1, target) + bee(current + 2, target);
}

int main() {
    int x, start, end;
    setbuf(stdout, NULL);
    scanf("%d", &x);
    for (int i = 0; i < x; ++i) {
        scanf("%d %d", &start, &end);
        printf("%d", bee(start, end));
    }
}

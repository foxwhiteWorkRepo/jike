#include <stdio.h>

int section(int line) {
    if (line == 1) return 2;
    return section(line - 1) + (line - 1) * 4 + 1;
}

int main() {
    int x, y;
    setbuf(stdout, NULL);
    scanf("%d", &x);
    for (int i = 0; i < x; ++i) {
        scanf("%d", &y);
        printf("%d\n", section(y));
    }
    return 0;
}

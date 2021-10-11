#include <stdio.h>

int main() {
    setbuf(stdout, NULL);
    int x;
    scanf("%d", &x);
    int data[x][3];
    for (int i = 0; i < x; ++i) {
        scanf("%d", &data[i][0]);
        scanf("%d", &data[i][1]);
        data[i][2] = data[i][0] + data[i][1];
    }
    int current_time = 0;
    int count;
    scanf("%d", &count);
    int min;
    while (1) {
        min = -1;
        for (int i = 0; i < x; ++i) {
            if (data[i][0] < current_time) continue;
            if (min == -1) min = i;
            if (data[min][1] < data[i][1]) continue;
            min = i;
        }
        if (min == -1) break;
        count++;
        current_time = data[min][1];
//        printf("Show %d Start: %d End: %d\n", count, data[min][0], data[min][1]);
    }
    printf("%d", count);
}

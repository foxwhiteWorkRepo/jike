#include <stdio.h>

int main() {
    while (1) {
        setbuf(stdout, NULL);
        int year;
        scanf("%d", &year);
        if (year == 0) break;
        int cows[year];
        for (int i = 0; i < year; ++i) {
            if (i == 0) {
                cows[i] = 1;
                continue;
            }
            cows[i] = cows[i - 1] + 1;
            if (i < 3) continue;
            for (int j = 0; j < (i - 3); ++j) cows[i] += cows[j];
        }
        printf("%d\n", cows[year-1]);
    }
}

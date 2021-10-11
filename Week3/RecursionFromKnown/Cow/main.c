#include <stdio.h>

int cow(int year) {
    if (year <= 4) return year;
    return cow(year - 4) + year;
}

int main() {
    setbuf(stdout, NULL);
    getchar();
    while (1) {
        int year;
        scanf("%d", &year);
        if (year == 0) break;
        printf("%d\n", cow(year));
    }
}

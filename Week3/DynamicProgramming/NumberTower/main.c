#include <stdio.h>

int build_tower(int size, int data[size][size], int result[size][size]) {
    for (int i = 0; i < size; ++i) {
        result[size - 1][i] = data[size - 1][i];
    }
    for (int i = size - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            result[i][j] = ((result[i + 1][j] > result[i + 1][j + 1]) ? result[i + 1][j] : result[i + 1][j + 1]) + data[i][j];
        }
    }
    return result[0][0];
}

int main() {
    setbuf(stdout, NULL);
    int x;
    scanf("%d", &x);
    int test[x];
    for (int i = 0; i < x; ++i) {
        int len;
        scanf("%d", &len);
        int data[len][len], result[len][len];
        for (int j = 0; j < len; ++j) {
            for (int k = 0; k <= j ; ++k) {
                scanf("%d", &data[j][k]);
            }
        }
        printf("%d", build_tower(len, data, result));
    }
    return 0;
}

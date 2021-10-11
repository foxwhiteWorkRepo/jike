#include <stdio.h>

float beanPerFood(const int data[2]) {
    return (float) data[0] / (float) data[1];
}

int main() {
    while (1) {
        int food, len;
        double bean = 0;
        scanf("%d %d", &food, &len);
        if (food == -1) break;
        int trade[len][2]; // 0 JavaBean 1 Food
        for (int i = 0; i < len; ++i) {
            scanf("%d %d", &trade[i][0], &trade[i][1]);
        }
        while (1) {
            int max = -1;
            for (int i = 0; i < len; ++i) {
                if (trade[i][0] == 0) continue;
                if (max == -1) max = i;
                if (beanPerFood(trade[max]) > beanPerFood(trade[i])) continue;
                max = i;
            }
            if (food >= trade[max][1]) {
                bean += trade[max][0];
                food -= trade[max][1];
                trade[max][0] = 0;
            } else {
                bean += beanPerFood(trade[max]) * (float) food;
                break;
            }
        }
        printf("%.3f\n", bean);
    }
}

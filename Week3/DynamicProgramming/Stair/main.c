#include <stdio.h>

int stair(int cache[], int current) {
    // Return cache if cache exist
    if (cache[current] != 0) return cache[current];
    // Result is the sum of next two value
    // Recursive
    int result =  stair(cache, current - 2) + stair(cache, current - 1);
    //Save result to cache
    cache[current] = result;
    return result;
}

int main() {
    setbuf(stdout, NULL);
    int x;
    scanf("%d", &x);
    int test[x];
    for (int i = 0; i < x; ++i) {
        scanf("%d", &test[i]);
        int cache[--test[i]];
        // Set all value in array to 0
        for (int j = 0; j < test[i]; ++j) {
            cache[j] = 0;
        }
        // Initiate Base cases
        cache[0] = 1;
        cache[1] = 2;
        printf("%d\n", stair(cache, test[i] - 1));
    }
}

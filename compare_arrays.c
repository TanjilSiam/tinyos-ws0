#include <stdio.h>

int arrays_equal(const int *a, const int *b, int len) {
    if (!a || !b) return 0;
    for (int i = 0; i < len; ++i) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

int main() {
    int x[] = {1,2,3,4};
    int y[] = {1,2,3,4};
    int z[] = {1,2,3,99};
    printf("x vs y: %d (1 means equal)\n", arrays_equal(x,y,4));
    printf("x vs z: %d (should be 0)\n", arrays_equal(x,z,4));
    return 0;
}

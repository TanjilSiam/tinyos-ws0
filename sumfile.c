#include <stdio.h>

int main(void) {
    FILE *f = fopen("foo.txt", "r");
    if (!f) { perror("fopen"); return 1; }
    int x, sum = 0;
    while (fscanf(f, "%d", &x) == 1) sum += x;
    fclose(f);
    printf("Sum = %d\n", sum);
    return 0;
}

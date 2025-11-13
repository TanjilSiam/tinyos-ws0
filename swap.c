#include <stdio.h>
#include <string.h>

void swap(void *x, void *y, size_t sz) {
    if (!x || !y) return;
    unsigned char tmp[256]; // safe for small sizes
    if (sz > sizeof(tmp)) return; // guard
    memcpy(tmp, x, sz);
    memcpy(x, y, sz);
    memcpy(y, tmp, sz);
}

void test_swap_int() {
    int a = 10, b = 20;
    printf("Before swap: a=%d b=%d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a=%d b=%d\n", a, b);
}

void test_swap_array() {
    char s1[] = "hello";
    char s2[] = "world";
    printf("Before: s1=%s s2=%s\n", s1, s2);
    swap(s1, s2, 6); // include null
    printf("After: s1=%s s2=%s\n", s1, s2);
}

int main() {
    test_swap_int();
    test_swap_array();
    return 0;
}

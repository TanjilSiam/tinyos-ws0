#include <stdio.h>
#include <stdlib.h>

void increment_via_pointer() {
    int n = 5;
    int *ptr_to_n = &n;
    (*ptr_to_n)++;
    printf("increment_via_pointer: n = %d (should be 6)\n", n);
}

void array_pointer_loop() {
    int arr[3] = {10, 30, 2000};
    int *p = arr;
    for (int i = 0; i < 3; ++i) {
        printf("arr[%d]=%d at %p\n", i, *(p + i), (void*)(p + i));
    }
}

int main() {
    increment_via_pointer();
    array_pointer_loop();
    return 0;
}

#include <stdio.h>

void print_array(int *arr, int width, int height) {
    for (int r = 0; r < height; ++r) {
        for (int c = 0; c < width; ++c) {
            printf("%5d", arr[r * width + c]);
        }
        printf("\n");
    }
}

int main() {
    int w = 4, h = 3;
    int arr[12];
    for (int i = 0; i < w*h; ++i) arr[i] = i+1;
    print_array(arr, w, h);
    return 0;
}

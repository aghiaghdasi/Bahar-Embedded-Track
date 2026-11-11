#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define int uint8_t

int set_bits(int x, int mask) {
    return (x | mask);
}

int clear_bits(int x, int mask) {
    return (x & ~mask);
}

int toggle_bits(int x, int mask) {
    return (x ^ mask);
}

bool test_bits(int x, int mask) { 
    if (x & mask) return true;
    return false;
}

void print(int x) {
    if (x == 0) {
        printf("0\n");
        return;
    }
    while (x > 0) {
        if (x % 2) printf("1");
        else printf("0");
        x /= 2;
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    int x = rand() % (1 << 8);
    int mask = rand() % (1 << 8);
    
    printf("x: "); print(x);
    printf("mask: "); print(mask);
    printf("set: "); print(set_bits(x, mask));
    printf("clear: "); print(clear_bits(x, mask));
    printf("toggle: "); print(toggle_bits(x, mask));
    printf("test: %d\n", test_bits(x, mask));
    
    return 0;
}
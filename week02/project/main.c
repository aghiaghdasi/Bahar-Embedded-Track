#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

uint8_t set_bits(uint8_t x, uint8_t mask) {
    return (x | mask);
}

uint8_t clear_bits(uint8_t x, uint8_t mask) {
    return (x & ~mask);
}

uint8_t toggle_bits(uint8_t x, uint8_t mask) {
    return (x ^ mask);
}

bool test_bits(uint8_t x, uint8_t mask) { 
    if (x & mask) return true;
    return false;
}

void print(uint8_t x) {
    uint8_t q = 0;
    bool c[11];
    if (x == 0) {
        printf("0\n");
        return;
    }
    while (x > 0) {
        if (x % 2) c[q++] = true;
        else c[q++] = false;
        x /= 2;
    }
    for(uint8_t i = 0; i < 8 - q; i++) printf("0");
    while(q--) printf("%hhu", c[q]);
    printf("\n");
}


int main() {
//    srand(time(NULL));
//    int x = rand() % (1 << 8);
//    int mask = rand() % (1 << 8);
    uint8_t x;
    uint8_t mask;
    uint8_t T = 3;
    while(T--)
    {
      char c = '.';
      printf("\ns:set    t:toggle       c:clear       q:test     b:show binary\n");
      scanf(" %c %hhu %hhu", &c, &x, &mask);
      if(c == 's') 
      {
          printf("\nset: "); 
          print((x = set_bits(x, mask)));
      }
      if(c == 'c') 
      {
          printf("\nclear: "); 
          print((x = clear_bits(x, mask)));
      }
      if(c == 'q')
      {
          printf("\ntest: %d\n", test_bits(x, mask));
      }
      if(c == 't')
      {
          printf("\ntoggle: "); 
          print((x = toggle_bits(x, mask)));
      }
      if(c == 'b')
      {
        printf("\n0b");
        print(x);
      }
      //printf("x: "); print(x);
      //printf("mask: "); print(mask);
    }
    return 0;
}
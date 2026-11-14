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
//    srand(time(NULL));
//    int x = rand() % (1 << 8);
//    int mask = rand() % (1 << 8);
    uint8_t x;
    uint8_t mask;
    uint8_t T = 3;
    while(T--)
    {
      char c;
      printf("s:set    t:toggle       c:clear       q:test");
      scanf(" %c %hhu %hhu", &c, &x, &mask);
      if(c == 's') 
      {
          printf("set: "); 
          print((x = set_bits(x, mask)));
      }
      if(c == 'c') 
      {
          printf("clear: "); 
          print((x = clear_bits(x, mask)));
      }
      if(c == 'q')
      {
          printf("test: %d\n", test_bits(x, mask));
      }
      if(c == 't')
      {
          printf("toggle: "); 
          print((x = toggle_bits(x, mask)));
      }
      //printf("x: "); print(x);
      //printf("mask: "); print(mask);
    }
    return 0;
}
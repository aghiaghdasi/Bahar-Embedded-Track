#include <stdint.h>
#include <stdio.h>

uint16_t d[8] =  {0, 1, 2, 3, 4, 5, 6, 7};

int main()
{
  for(uint16_t ind = 0; ind < 8; ind++)
  {
    printf("d[%hhu]:%hhu  with pointer: %hhu  \n", ind, d[ind], *(d + ind));
  }
  d[0] = 27;
  uint16_t *p = &d[2];
  *p = 66;
  p = d;
  *(p+3) = 71;
  printf("after changes:\n");
  for(uint16_t ind = 0; ind < 8; ind++)
  {
    printf("d[%hhu]:%hhu  with pointer: %hhu  \n", ind, d[ind], *(d + ind));
  }
  printf("size of uint16_t : %d\n", sizeof(uint16_t));
  printf("d:%p d+1:%p\n", d, (d + 1));
  printf("P:%p  &d[2]:%p  p+1:%p  &d[3]:%p\n", p, &d[2], (p+1), &d[3]);
  printf("size(p):%d    size(d):%d\n", sizeof(p), sizeof(d));
}
#include <stdint.h>


int main( void )
{
  volatile uint8_t x = 0;
  while(1)
  {
    x++;
  }
}

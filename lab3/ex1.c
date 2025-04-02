#include <stdio.h>
int main(void) {
  unsigned int x = 0x87654321; // 	 1000 0111 0110 0101 0100 0011 0010 0001 
  unsigned int y, z;

  /* o byte menos significativo de x e os outros bits em 0 */
  y = x&0x21; // 0000 0000 0000 0000 0000 0000 0010 0001

  /* o byte mais significativo com todos os bits em '1' 
     e os outros bytes com o mesmo valor dos bytes de x */
  z = x|0xFF654321; // 1111 1111 0110 0101 0100 0011 0010 0001

  printf("%08x %08x\n", y, z);
}
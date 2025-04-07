#include <stdio.h>

int odd_ones(unsigned int x) 
{
    int i = 0;
    for(; x != 0; x = x >> 1)
    {
        if (x & 1)
            i++;
    }

    int result = i & 1;
    printf("%d\n", result);
    return result;
  
}
int main() {
  printf("%x tem numero %s de bits\n",0x01010101,odd_ones(0x01010101) ? "impar":"par");
  printf("%x tem numero %s de bits\n",0x01030101,odd_ones(0x01030101) ? "impar":"par");
  return 0;
}
#include <stdio.h>


unsigned char switch_byte(unsigned char x)
{
    unsigned char a = (x & 0x0F) << 4;
    unsigned char b = (x & 0xF0) >> 4;
    unsigned char result = a | b;
    return result;
}


unsigned char rotate_left(unsigned char x, int n)
{
    unsigned char a = x << n;       // deslocamento para a esquerda
    unsigned char b = x >> (8-n);    // recuperação dos bits perdidos a esquerda
    unsigned char result = (a | b) & 0xff; // junta os dois pedacos e garante que o resultado tera 8 bits
    return result;
}


int main(void)
{
    unsigned char x = 0xAB;
    unsigned char result1 = switch_byte(x);
    printf("%x\n", result1);
    unsigned char y = 0x61;
    int n;
    while (n > 0 || n < 8)
    {
        printf("insira o numero para rotate_left:\n");
        scanf("%d", &n);
        if (n <= 0 || n >= 8)
        {
            printf("FIM!\n");
            break;
        }
        printf("resultado = %x\n", rotate_left(y, n));
    }
    
    return 0;
}
#include <stdio.h>

int main() {
    int x = 0x87654321;
    printf("%x\n", x&0xFF);
    printf("%x\n", (~(x|0xff) | (x&0xFF)));
    printf("%x", x | 0xFF);
}
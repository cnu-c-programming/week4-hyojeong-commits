#include <stdio.h>

void swap_endian(int* x) {
    unsigned char*k  = (unsigned char*)x;
    unsigned char gal;
    gal = k[0]; k[0] = k[3]; k[3] = gal;
    gal = k[1]; k[1] = k[2]; k[2] = gal;
}

int main() {
    int x = 0x12345678;
  
    printf("%x\n", x);   
    swap_endian(&x);
    printf("%x\n", x);   
  
    return 0;
}

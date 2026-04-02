#include <stdio.h>

void swap_endian(int* x) {
    unsigned char* p = (unsigned char*)x;
    unsigned char tmp;
    tmp = p[0]; p[0] = p[3]; p[3] = tmp;
    tmp = p[1]; p[1] = p[2]; p[2] = tmp;
}

int main() {
    int val = 0x12345678;
  
    printf("before: 0x%08X\n", val);   
    swap_endian(&val);
    printf("after:  0x%08X\n", val);   
  
    return 0;
}

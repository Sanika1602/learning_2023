#include <stdio.h>
int SetBits(int num) {
    int c = 0;
    while (num) {
        c += num & 1;
        num >>= 1;
    }
    return c;
}

int TotalSetBits(int a[], int size) {
    int t_Bits = 0;
    for (int i = 0; i < size; i++) {
        t_Bits += SetBits(a[i]);
    }
    return t_Bits;
}

int main() {
    int a[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    int t_Bits = TotalSetBits(a, size);
    printf("Total set bits: %d\n", t_Bits);
    return 0;
}

#include <stdio.h>
int main() {
    unsigned int number;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &number);
    printf("Bits: ");
    bits(number);
    return 0;
}
void bits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31;
    for (i = 0; i < 32; i++) {
        int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);
        mask >>= 1;
    }
    printf("\n");
}

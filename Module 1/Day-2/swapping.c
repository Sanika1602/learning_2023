#include <stdio.h>
void swap(void* a, void* b, size_t size) {
    unsigned char* p = (unsigned char*)a;
    unsigned char* q = (unsigned char*)b;

    for (size_t i = 0; i < size; i++) {
        unsigned char temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

int main() {
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
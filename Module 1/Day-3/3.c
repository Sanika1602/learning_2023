#include <stdio.h>

int LargestNumber(int num) {
    int largest = 0,divisor=1;
    while (divisor <= num) {
        int temp = (num / (divisor * 10)) * divisor + (num % divisor);
        if (temp > largest) {
            largest = temp;
        }
        divisor *= 10;
    }
    return largest;
}

int main() {
    int n;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    int largest = LargestNumber(n);
    printf("Largest number by deleting a single digit is: %d\n", largest);
    return 0;
}

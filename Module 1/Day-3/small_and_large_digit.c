#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    
    // Iterate over each number
    for (int i = 0; i < n; i++) {
        int smallestDigit = 9;
    int largestDigit = 0;

        int num = numbers[i];
        int temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }

            temp /= 10;
        }
    if (smallestDigit == 9 || largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest and largest digit is %d and %d\n", smallestDigit,largestDigit);
    }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    int numbers[n];
    printf("Enter the elements:\n");
    for(int j=0;j<n;j++)
    scanf("%d",&numbers[j]);
    findSmallestLargestDigits(n, numbers);

    return 0;
}

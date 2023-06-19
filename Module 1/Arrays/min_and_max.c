#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number of elements in array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
    scanf("%d", &arr[i]);
    int minimum = findMinimum(arr, n);
    printf("The minimum value in the array is: %d\n", minimum);
    int maximum = findMaximum(arr, n);
    printf("The maximum value in the array is: %d\n", maximum);
}

int findMinimum(int arr[], int n) {
    int min = arr[0];  // Assume the first element as the minimum

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];  // Update minimum if a smaller value is found
        }
    }

    return min;
}
int findMaximum(int arr[], int n) {
    int max = arr[0];  // Assume the first element as the minimum

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update minimum if a smaller value is found
        }
    }

    return max;
}


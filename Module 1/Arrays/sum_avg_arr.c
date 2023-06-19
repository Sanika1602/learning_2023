#include<stdio.h>
int main()
{
    int n,i,avg,sum=0;
    printf("Enter number of elements in array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d", arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("The sum and average of elements in array is %d and %d",sum,avg);
}
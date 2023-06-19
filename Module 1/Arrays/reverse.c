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
    revarr(arr,n);
}
int revarr( int arr[], int n){
    int i;
    for(i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-i-1]=temp;
    }
    printf("The reversed array is :\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
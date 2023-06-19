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
    int difference= diff(arr,n);
    printf("The difference bet even and odd is :%d",difference);
}
int diff(int arr[],int n){
    int i,sum_even=0,sum_odd=0;
    for(i=0;i<n;i++){
        if(i%2==0)
        {
            sum_even=sum_even+arr[i];
        }
        else
        sum_odd=sum_odd+arr[i];
    }
    int d=sum_even>sum_odd?sum_even-sum_odd:sum_odd-sum_even;
    return d;
}
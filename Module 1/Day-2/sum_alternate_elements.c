#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the number of elements in array: ");
    scanf("%d",&num);
    int a[num];
    printf("Enter the elements of array: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i+=2)
    {
        sum=sum+a[i];
    }
    printf("The sum of alternate elements of an array is %d",sum);
    return 0;
}
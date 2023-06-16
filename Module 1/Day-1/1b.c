#include<stdio.h>
int main()
{ 
    int n1,n2,ans;
    printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);
    ans=n1>n2?n1:n2;
    printf("%d is greater between %d and %d",ans,n1,n2);
    return 0;

}
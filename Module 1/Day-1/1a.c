#include<stdio.h>
int main()
{ 
    int n1,n2;
    printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    printf("%d is greater\n",n1);
    else
    printf("%d is greater\n",n2);
    return 0;

}
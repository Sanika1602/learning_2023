#include<stdio.h>
int main()
{
    int per;
    printf("Enter the percentage:\n");
    scanf("%d",&per);
    if(per>=90 && per<=100)
    printf("Grade A\n");
    else if(per>=75 && per<90)
    printf("Grade B\n");
    else if(per>=60 && per<75)
    printf("Grade C\n");
     else if(per>=50 && per<60)
     printf("Grade D\n");
     else
     printf("Grade F\n");
     return 0;
}
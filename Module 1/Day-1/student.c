#include <stdio.h>
int main()
{  
    struct student {
    char name[50];
    int roll;
    float maths,phy,chem;
} s;
    float avg,total;   
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s",s.name);
    printf("Enter maths marks:\n");
    scanf("%f", &s.maths);
    printf("Enter physics marks:\n");
    scanf("%f", &s.phy);
    printf("Enter chemistry marks:\n");
    scanf("%f", &s.chem);
    total=(s.maths+s.phy+s.chem);
    avg=(total/3);
    printf("The total and average of marks obtained by %s having roll num %d is %.1f and %.1f\n",s.name,s.roll,total,avg);
    return 0;
}

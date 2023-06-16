#include<stdio.h>
int bit_operations(int,int);
int main()
{
    int num,op_type;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter operator type: ");
    scanf("%d",&op_type);
    int res= bit_operations(num, op_type);
    printf("%d\n", res);
    return 0;
}
int bit_operations(int num,int op_type)
{
     if (op_type == 1) {
        num |= (1 << 0);
    }
    else if (op_type == 2) {
        num &= ~(1 << 30);
    }
    else if (op_type == 3) {
        num ^= (1 << 15);
    }
    return num;   
}

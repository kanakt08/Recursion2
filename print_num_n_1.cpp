//Write a program to print numbers from 1 to N

#include<stdio.h>
void print_num(int n)
{
    if(n==0)
    {
        return;
    }
    printf("%d\t",n);
    print_num(n-1);
}
int main()
{
    int n;
    printf("enter the value pf n : ");
    scanf("%d",&n);

    print_num(n);
}

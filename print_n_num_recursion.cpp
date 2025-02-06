//Write a program to print numbers from 1 to N

#include<stdio.h>
void natural_num(int i,int n)
{
    if(i>n)
    {
        return ;
    }
    printf("%d\t",i);
    natural_num(i+1,n);
}
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);

    natural_num(1,n);
}

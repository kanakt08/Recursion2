#include<stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return n;
    }
    int Sum = n + sum(n-1);
    return Sum;
}
int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("sum of %d : %d",n,sum(n));
    return 0;
}

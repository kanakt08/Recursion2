#include<stdio.h>
int power_of_two(int n)
{
    if(n==0)
    {
        return 1;
    }
    int pow = 2*power_of_two(n-1);
    return pow;
}
int main()
{
    int n;
    printf("to calcluate 2^n, then enter the value of n : ");
    scanf("%d",&n);
    int p=power_of_two(n);
    printf("2^%d = %d ",n,p);
}

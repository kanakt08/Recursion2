// printf nth term of fibonacci series
#include<stdio.h>
int fib(int n)
{
    if(n==0 || n==1){
        return n;
    }
    int result = fib(n-1)+fib(n-2);
    return result;
}
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);

    printf("fibonacci %dth term : %d",n,fib(n));
}

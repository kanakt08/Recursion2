//Write a program to find the factorial of a number

#include<stdio.h>
int fact(int n)
{
    if(n==1){
        return n;
    }
    int result = n * fact(n-1);
    return result;
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("factorial of %d : %d",n,fact(n));
}

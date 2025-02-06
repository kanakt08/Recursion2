//Write a program to find the sum of natural numbers

#include<stdio.h>
int sumofdidgit(int n)
{
    if(n==0){
        return 0;
    }
    return ((n%10) + sumofdidgit(n/10));
}
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    int s = sumofdidgit(n);
    printf("sum of digit of %d =%d",n,s);
}

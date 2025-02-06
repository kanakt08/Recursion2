#include<stdio.h>
int count_digit(int n)
{
    if(n==0){
        return 0;
    }
    return (1 + count_digit(n/10));
}
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);

    int c = count_digit(n);

    printf("count_didgit of %d = %d",n,c);
}

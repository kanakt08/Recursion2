#include<stdio.h>
#include<string.h>
void reverse_string(char str[],int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    char temp;

    temp=str[s];
    str[s]=str[e];
    str[e]=temp;

    reverse_string(str,s+1,e-1);
}
int main()
{
    char str[10];
    printf("enter the string : ");
    scanf("%s",&str);

    int l = strlen(str);

    reverse_string(str,0,l-1);
    printf("%s",str);
}

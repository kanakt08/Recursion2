#include<stdio.h>
#include<string.h>
int ispalindrome(char str[],int s,int e)
{
    if(s>=e){
        return 1;
    }
    else{
        if(str[s]!=str[e])
        {
            return 0;
        }
    }
    ispalindrome(str,s+1,e-1);
}
int main()
{
    char str[10];
    printf("enter the string : ");
    scanf("%s",&str);
    int l = strlen(str);

    if(ispalindrome(str,0,l-1)){
        printf("string is palindrome.");
    }
    else{
        printf("string is not palindrome.");
    }
    return 0;
}

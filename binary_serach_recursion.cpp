#include<stdio.h>
int Binary_search(int arr,int s,int e,int key)
{
    int mid = (s+e)/2;
    if(s>=e){
        return 0;
    }
    if(arr[mid]==key){
        return 1 ;
    }
    else if(arr[mid]>key){
        Binary_search(arr,mid+1,e,key);
    }
    else{
        Binary_search(arr,s,mid-1,key);
    }
}
int main()
{
    int arr[100],n,i;
    printf("enter the size of the array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int key;
    printf("enter the search element : ");
    scanf("%d",&key);
    int b=Binary_search(arr,0,n-1,key);
    printf("%d",b)
}

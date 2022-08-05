#include<stdio.h>
int main()
{
int arr[]={3,7,2,0,1,5,8};
int n=sizeof(arr)/sizeof(arr[0]);
int x=3;
int result=binarysearch(arr,x,0,n-1);
if (result ==-1)
printf("not found");
else
printf("element found");
return 0;
}
int binarysearch(int arr[],int x,int i, int j)
{
while(i<=j)
{
    int mid=i+(i-j)/2;
if(arr[mid]==x)
    return mid;
    if(arr[mid]<x)
    i=mid+1;
    else
    j=mid-1;
}
return -1;
}

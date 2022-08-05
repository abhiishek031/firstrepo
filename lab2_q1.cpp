#include<iostream>
using namespace std;
int i,n,flag =0; 
int main()
{
cout<<"enter the number : ";
cin>>n;
if(n==0 || n==1)
flag = 1;
for (i=2 ; i<=n/2 ; ++i)
{
if(n%i==0)
{
    flag = 1;
    break;
}
}
if(flag ==0)
cout<<"the numebr is prime : "<<n;
else
cout<<"the number is not a prime no : "<<n;
return 0;
}


  
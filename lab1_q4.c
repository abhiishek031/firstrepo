#include <stdio.h>

    int main() {

    int a[10],i,min,max=0,pos=0;

    printf("Please enter 10 int values :\n");
    do{
    scanf("%d", &a[pos++]);
    } while (pos<10);

    for (i=0; i<10;i++) {
    printf("%i\n",a[i]);

    if (max<a[i])
    {
max=a[i];
}

    if (min>a[i])

    {
min=a[i];
    }

    for (i=0;i<10;i++) {

    if (a[i]==max) 
a[i]=max;

    if (a[i] == min) a[i] = min;

    }  

    printf("The new order is : %d %d %d ", max, min);

    return 0;   
    }
    }
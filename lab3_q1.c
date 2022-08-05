#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main(void)
{
    int n, i, j, temp;
    int arr[20];
    printf("Enter number of elements-->\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) 
    {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\n", arr[i]);
    }
    


     double time_spent = 0.0;
 
    clock_t begin = clock();
    sleep(1);
 
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
    printf("The time taken to sort the array is %f seconds", time_spent);
    return 0;
}
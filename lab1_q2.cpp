#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter the array : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "K : ";
    cin >> k;
    int timeStamp = 0;
    for (int i = 0; i < 10; i++)
    {
        timeStamp++;
        if (arr[i] == k)
        {
            cout << "Present"
                 << "\n"
                 << "TimeStamp : " << timeStamp;
            return 0;
        }
    }
    cout << "Not present"
         << "\n"
         << "TimeStamp : " << timeStamp;
    return 0;
}
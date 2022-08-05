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
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == k)
        {
            cout << "Present";
            return 0;
        }
    }
    cout << "Not present";
    return 0;
}
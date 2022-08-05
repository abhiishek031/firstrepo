#include <iostream>
#include <math.h>
using namespace std;
int f(int x)
{
    return pow(x, 2) + 2 * x + 5;
}
int main()
{
    int x = 1;
    int ans = f(x);
    int n, c;
    for (int i = 2; i > 0; i--)
    {
        for (n = 0; n < 10; n++)
        {
            for (c = 0; c < 10; c++)
            {
                int one = f(n);
                int two = c * pow(n, i);
                if (two >= one)
                {
                    cout << "x:" << n << "  c:" << c << endl;
                    cout << "O(x" << i << ")" << endl;
                    return 0;
                }
            }
        }
    }
}
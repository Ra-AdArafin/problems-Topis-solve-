#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int counter = 0;

    while (n > 0)
    {
        // Checking if the last bit is 1
        if (n & 1)
        {
            counter++;
        }
        n = n >> 1;
    }

    cout << "Total Number of 1s: " << counter << endl;
    return 0;
}

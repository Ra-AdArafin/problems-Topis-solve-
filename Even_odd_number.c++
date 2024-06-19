#include <bits/stdc++.h>
using namespace std;
bool isEven(int x)
{

    if (x & 1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;
    if (isEven(n))
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;
    int pos;
    cout << "Enter Number:";
    cin >> pos;
    int first = 0;
    int second = 1;
    int i = 0;
    int k;

    while (i <= n)
    {
        cout << first << " ";
        if (pos == i)
        {

            k = first;
            cout << endl;
            cout << pos << "ith Fibonacci number:" << k << " ";

            break;
        }
        int result = first + second;
        first = second;
        second = result;
        i++;
    }
    cout << endl;

    return 0;
}
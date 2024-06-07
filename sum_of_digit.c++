#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;
    int product = 1;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int result = product - sum;
    cout << "result:" << sum << " ";

    return 0;
}
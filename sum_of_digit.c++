#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Name:";
    cin >> n;
    int product = 1;
    int sum = 0;
    int digit;
    while (n > 0)
    {

        digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int result = product - sum;

    cout << "Result is:" << result << " ";

    return 0;
}
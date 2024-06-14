#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    int i = 1;
    int ans = 1;
    while (i <= b)
    {
        ans = ans * a;
        i++;
    }
    cout << "Answer is:" << ans;

    return 0;
}

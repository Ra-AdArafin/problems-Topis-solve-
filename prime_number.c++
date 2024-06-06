#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v2;
    int n;
    cout << "Enter Numbers:";
    cin >> n;
    int i = 2;
    while (i <= n - 1)
    {
        if (i % 2 == 0)
        {
            v.push_back(i);
        }
        else if (i % 2 != 0)
        {
            v2.push_back(i);
        }
        i = i + 1;
    }
    cout << endl;
    cout << "prime Numbers: are ";
    for (auto prime : v)
    {

        cout << prime << " ";
    }
    cout << endl;
    cout << "Not prime Numbers:";

    for (auto not_prime : v2)
    {

        cout << not_prime << " ";
    }

    return 0;
}
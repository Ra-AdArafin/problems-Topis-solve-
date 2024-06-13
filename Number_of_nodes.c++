#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tk;
    cout << "Enter Tk: ";
    cin >> tk;

    int hundred_tk = tk / 100;
    int rem = tk % 100;
    cout << "Hundred tk: " << hundred_tk << endl;

    int twenty_tk = rem / 20;
    rem = rem % 20;
    cout << "Twenty tk: " << twenty_tk << endl;

    int ten_tk = rem / 10;
    cout << "Ten taka: " << ten_tk << endl;

    return 0;
}

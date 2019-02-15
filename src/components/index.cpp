#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 3;
    string y;
    cin >> y;
    x = y.length();
    cout << x;
    for (int i = x - 1; i >= 0; i--)
    {
        cout << y[i];
    }
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin >> t;

    long div = 3;

    while(t > div)
    {
        t -= div;
        div *= 2;
    }

    cout << (div - t + 1) << endl;

    return 0;
}
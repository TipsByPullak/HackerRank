#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int div = 3;

    while(t > div)
    {
        t -= div;
        div *= 2;
    }

    cout << (div - t + 1) << endl;

}
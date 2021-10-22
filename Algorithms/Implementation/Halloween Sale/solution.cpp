#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, d, m, s;

    cin >> p >> d >> m >> s;

    if(p > s)
    {
        cout << 0 << endl;
        return 0;
    }

    int budget_used = p;

    s = s - p;

    int count = 1;

    while(s - p >= 0)
    {
        if(p - d > m)
            p -= d;
        else
            p = m;

        budget_used += p;

        s -= p;

        ++count;
    }

    cout << count << endl;

    return 0;
}
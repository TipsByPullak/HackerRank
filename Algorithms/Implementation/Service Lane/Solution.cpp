#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, temp, start, end, min = INT_MAX;
    cin >> n >> t;
    vector<int> v(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> temp;
        v[i] = temp;
    }

    while(t--)
    {
        cin >> start >> end;
        for(int i = start; i <= end; ++i)
        {
            if (v[i] <= min) min = v[i];
        }
        cout << min << endl;

        min = INT_MAX;
    }

    return 0;
}
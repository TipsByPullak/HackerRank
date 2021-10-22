#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, temp, count = 0;
    cin >> n >> d;

    if(n < 3)
    {
        cout << count << endl;
        return 0;
    }

    unordered_set<int> set;
    vector<int> arr;

    for(int i = 0; i < n; ++i)
    {
        cin >> temp;
        arr.push_back(temp);
        set.insert(temp);
    }

    for(int i = 0; i < n - 2; ++i)
    {
        if(set.find(arr[i] + d) != set.end() && set.find(arr[i] + 2*d) != set.end())
        {
            ++count;
        }
    }

    return count;
}
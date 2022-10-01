#include <bits/stdc++.h>

using namespace std;

int furthest_space_station(int n, vector<int> cities)
{
    int ans = 0;
    
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<int> cities;
    
    for(int i = 0; i < m; ++i)
    {
        int temp;
        cin >> temp;
        
        cities.push_back(temp);
    }
    
    cout << furthest_space_station(n, cities) << endl;
    
    return 0;
}
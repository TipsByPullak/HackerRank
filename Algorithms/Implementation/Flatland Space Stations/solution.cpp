#include <bits/stdc++.h>

using namespace std;

int global_city;

void subtractGlobalCity(int &a)
{
    a = abs(a - global_city);
}

int furthest_space_station(int n, vector<int> cities)
{
    int ans = 0;
    
    for (int i = 0; i < n; ++i)
    {
        vector<int> dist = cities;
        
        global_city = i;
        
        for_each(cities.begin(), cities.end(), &subtractGlobalCity);
        
        auto curr_max_itr = max_element(cities.begin(), cities.end());
        
        if (*curr_max_itr > ans) ans = *curr_max_itr;
    }
    
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
        
        cities.push_back(temp - 1);
    }
    
    cout << furthest_space_station(n, cities) << endl;
    
    return 0;
}
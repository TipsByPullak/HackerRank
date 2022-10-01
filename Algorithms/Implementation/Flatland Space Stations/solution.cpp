#include <bits/stdc++.h>

using namespace std;

int global_city;

void subtractGlobalCity(int &a)
{
    a = abs(a - global_city);
}

void printVectorElement(int &a)
{
    cout << a << ", ";
}

void printVector(vector<int> v)
{
    for_each(v.begin(), v.end(), &printVectorElement);
    cout << endl;
}

int furthest_space_station(int n, vector<int> cities)
{
    int ans = 0;
    
    for (int i = 0; i < n; ++i)
    {
        vector<int> dist = cities;

        global_city = i;
        
        for_each(dist.begin(), dist.end(), &subtractGlobalCity);
        
        auto curr_max_itr = min_element(dist.begin(), dist.end());
        
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
        
        cities.push_back(temp);
    }
    
    cout << furthest_space_station(n, cities) << endl;
    
    return 0;
}
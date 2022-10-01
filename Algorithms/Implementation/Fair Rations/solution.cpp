#include <bits/stdc++.h>
using namespace std;

string fairRations(vector<int> v)
{
    int cost = 0, sum = accumulate(v.begin(),v.end(), 0);
    
    if(sum%2 != 0)  return "NO" ;
    
    for(int i = 0; i< v.size(); i++)
    {
        if(v[i]%2 == 1)
        {
            ++v[i+1];
            cost += 2;
        }
    }
    
    return to_string(cost);
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(auto& i : v) cin >> i;
    
    cout << fairRations(v) << endl;    
    
    return 0;
}

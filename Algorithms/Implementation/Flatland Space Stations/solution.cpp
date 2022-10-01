#include <bits/stdc++.h>

using namespace std;

void printVectorElement(int &a)
{
    cout << a << ", ";
}

void printVector(vector<int> v)
{
    for_each(v.begin(), v.end(), &printVectorElement);
    cout << endl;
}

// Method to compare which one is the more close.
// We find the closest by taking the difference
// between the target and both values. It assumes
// that val2 is greater than val1 and target lies
// between these two.
int getClosest(int val1, int val2,
               int target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}

int findClosest(vector<int> arr, int n, int target)
{
    // Corner cases
  //left-side case
    if (target <= arr[0])
        return arr[0];
  //right-side case
    if (target >= arr[n - 1])
        return arr[n - 1];
 
    // Doing binary search
    int i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;
 
        if (arr[mid] == target)
            return arr[mid];
 
        /* If target is less than array element,
            then search in left */
        if (target < arr[mid]) {
 
            // If target is greater than previous
            // to mid, return closest of two
            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],
                                  arr[mid], target);  
            j = mid;
        }
      /* Repeat for left half */
 
        // If target is greater than mid
        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],
                                  arr[mid + 1], target);
            // update i
            i = mid + 1;
        }
    }
    // Only single element left after search
    return arr[mid];
}

int furthest_space_station(int n, vector<int> cities)
{
    int ans = 0;
    
    sort(cities.begin(), cities.end());
    
    for (int i = 0; i < n; ++i)
    {
        int smallest_distance = abs(i - findClosest(cities, cities.size(), i));
        
        if (smallest_distance > ans) ans = smallest_distance;
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
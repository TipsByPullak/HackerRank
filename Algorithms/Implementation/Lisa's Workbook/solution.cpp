#include <bits/stdc++.h>

using namespace std;

int workbook(int n, int k, vector<int> arr) {
    // n is the number of chapters
    // k is the number of problems that can fit on a page
    
    int page = 1;
    
    for(unsigned int i = 0; i < arr.size() ++i)
    {
        int curr_no_of_ques = arr[i];
        
        while(curr_no_of_ques)
        {
            
        }
         
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> arr;
    
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        
        arr.push_back(temp);
    }
    
    cout << workbook(n, k, arr) << endl;
    
    return 0;
}
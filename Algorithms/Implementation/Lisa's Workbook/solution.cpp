#include <bits/stdc++.h>

using namespace std;

int workbook(int n, int k, vector<int> arr) {
    // n is the number of chapters
    // k is the number of problems that can fit on a page
    
    int page = 1;
    
    int ans = 0;
    
    for(unsigned int i = 0; i < arr.size(); ++i)
    {
        int curr_no_of_ques = arr[i];
        int ques_no = 1;
        
        while(ques_no <= curr_no_of_ques)
        {
            if (ques_no == page)
            {
                ++ans;
            }
            
            if ((ques_no % k == 0) || (ques_no == curr_no_of_ques))
            {
                ++page;
            }
            
            ++ques_no;
        }
    }
    
    return ans;
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
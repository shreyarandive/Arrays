//
//  main.cpp
//  Largest-Number-At-Least-Twice-of-Others
//
//  Created by Shreya Randive on 2/4/19.
//  Copyright © 2019 Shreya Randive. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
class Solution {
public:
    int dominantIndex(vector<int>& nums)
    {
        unsigned long size = nums.size();
        vector <int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        int max = sorted[size - 1];
        int max_index = -1;
        
        for(int i = 0 ; i < size ; i++)
        {
            if(nums[i] == max)
                max_index = i;
            
            else if(nums[i] * 2 > max)
                return -1;
            
        }
        
        return max_index;
    }
};

int main(int argc, const char * argv[]) {
    
    Solution index;
    vector<int> nums = {1, 2, 3, 4};
    cout<<index.dominantIndex(nums);
    return 0;
}

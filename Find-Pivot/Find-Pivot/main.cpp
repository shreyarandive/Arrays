//
//  main.cpp
//  Find-Pivot
//
//  Created by Shreya Randive on 2/3/19.
//  Copyright © 2019 Shreya Randive. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class FindPivotIndex {
private:
    
    int sum = 0;
    int index = 0;
    int sum_around_pivot = 0;
    
public:
    
    int pivotIndex(vector<int>& nums)
    {
        if(nums.empty())
            return -1;
       
        for(int i : nums)
            sum += i;
        
        while(index != nums.size())
        {
            if(sum_around_pivot + sum_around_pivot == sum - nums[index])
                return index;
            
            sum_around_pivot += nums[index++];
        }
        
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<int>nums = {1, 7, 3, 6, 5, 6};
    
    FindPivotIndex find;
    cout<<find.pivotIndex(nums);
    return 0;
}

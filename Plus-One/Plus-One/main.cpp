//
//  main.cpp
//  Plus-One
//
//  Created by Shreya Randive on 2/4/19.
//  Copyright © 2019 Shreya Randive. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class PlusOneSolution {
    public:
    
    vector<int> plusOne(vector<int>& digits)
    {
        int carry = 1;
        
        for(int i = digits.size() - 1 ; i >= 0 ; i --)
        {
            if(digits[i] + carry >= 10)
            {
                digits[i] = 0;
            }
            else
            {
                digits[i] = digits[i] + carry;
                carry = 0;
            }
        }
        
        if(carry == 1)
            digits.insert(digits.begin(), 1, 1);
        
        return digits;
    }
};


int main(int argc, const char * argv[])
{
    PlusOneSolution solution;
    vector<int>digits = {8,9,9,9};
    solution.plusOne(digits);
    
    for(auto i : digits)
        cout<<i<<" ";
    return 0;
}

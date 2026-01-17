#include <iostream>
#include <vector>

using namespace std;

// problem 136. Single Number
int singleNumber(vector<int>& nums) {
    int ans = 0;
        for(int val : nums){
            ans = ans ^ val; 
        }
        return ans;
}
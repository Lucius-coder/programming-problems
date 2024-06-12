#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i + 1; j < nums.size(); ++j) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};  
                }
            }
        }
        
        return {};
    }
};

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    Solution sol;
   
    vector<int> result = sol.twoSum(numbers, 9);  
    
    if (result.empty()) {
        cout << "No numbers in this list can add up to the target" << endl;
    } else {
        for(int i : result) {
            cout << i << endl;
        }
    }
    
    return 0;
}

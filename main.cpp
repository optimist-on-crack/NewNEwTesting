#include <iostream>
#include <vector>
#include <unordered_map>
using std::vector;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            int compliment=target-nums[i];
            if(map.find(compliment)!=map.end())
            {
                return {map[compliment],i};
            }
            map[nums[i]]=i;
        }
        return {-1,-1};
    }
};

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution solution; // Create an instance of the Solution class
    std::vector<int> result = solution.twoSum(nums, target); // Call the twoSum function

    // Print the result as an array
    std::cout << "[";
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}


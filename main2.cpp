#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result; // Create a vector to store the result
        
        // Implementation of the twoSum function
        
        // Find the indices of the two elements that sum up to the target
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    // Found the pair, store the elements in the result vector
                    result.push_back(nums[i]);
                    result.push_back(nums[j]);
                    return result; // Return the result immediately
                }
            }
        }
        
        return result; // If no pair found, return an empty vector
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

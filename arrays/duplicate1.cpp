#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        
        sort(nums.begin(), nums.end()); // Sort the input vector
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) { // Check if current element is equal to previous element
                duplicates.push_back(nums[i]); // If equal, it's a duplicate
            }
        }
        
        return duplicates;
    }
};

int main() {
    vector<int> nums = {1, 2, 4, 5, 1, 2}; // Initialize nums vector
    
    Solution solution; // Create an instance of the Solution class
    vector<int> result = solution.findDuplicates(nums); // Find duplicates
    
    // Print duplicates
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

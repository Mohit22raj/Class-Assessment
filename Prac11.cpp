//Sample Input: {1,2,1,3,1}
//Sample Output: true
//Sample Input: {1,2,3,4,5}
//Sample Output: false

#include <iostream>
#include <unordered_set>
#include <vector>

bool containsDuplicate(const std::vector<int>& nums) {
    std::unordered_set<int> numSet;
    
    for (int num : nums) {
        if (numSet.find(num) != numSet.end()) {
            // Duplicate found
            return true;
        }
        numSet.insert(num);
    }
    
    // No duplicate found
    return false;
}

int main() {
    // Sample Input: {1,2,1,3,1}
    std::vector<int> input1 = {1, 2, 1, 3, 1};
    std::cout << std::boolalpha << containsDuplicate(input1) << std::endl;  // Output: true
    
    // Sample Input: {1,2,3,4,5}
    std::vector<int> input2 = {1, 2, 3, 4, 5};
    std::cout << std::boolalpha << containsDuplicate(input2) << std::endl;  // Output: false
    
    return 0;
}

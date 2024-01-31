//Sample Input:{1,2,1,3,1}
//Sample Output: 1
//Sample Input: {1,2,3,4,2}
//Sample Output: 2

#include <iostream>
#include <unordered_map>
#include <vector>

int countDuplicates(const std::vector<int>& nums) {
    std::unordered_map<int, int> numMap;
    int duplicates = 0;
    
    for (int num : nums) {
        numMap[num]++;
    }
    
    for (const auto& pair : numMap) {
        if (pair.second > 1) {
            duplicates++;
        }
    }
    
    return duplicates;
}

int main() {
    // Sample Input: {1,2,1,3,1}
    std::vector<int> input1 = {1, 2, 1, 3, 1};
    std::cout << countDuplicates(input1) << std::endl;  // Output: 1
    
    // Sample Input: {1,2,3,4,2}
    std::vector<int> input2 = {1, 2, 3, 4, 2};
    std::cout << countDuplicates(input2) << std::endl;  // Output: 2
    
    return 0;
}

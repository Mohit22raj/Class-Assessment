//Sample Input: {3,2,2,3}
//Sample Output: 2,2


#include <iostream>
#include <unordered_map>
#include <vector>

void printDuplicates(const std::vector<int>& nums) {
    std::unordered_map<int, int> numMap;
    
    // Count occurrences of each number
    for (int num : nums) {
        numMap[num]++;
    }
    
    bool firstDuplicate = true;
    // Print counts of each duplicate
    for (const auto& pair : numMap) {
        if (pair.second > 1) {
            if (!firstDuplicate) {
                std::cout << ",";
            }
            std::cout << pair.second;
            firstDuplicate = false;
        }
    }
}

int main() {
    // Sample Input: {3,2,2,3}
    std::vector<int> input = {3, 2, 2, 3};
    printDuplicates(input);  // Output: 2,2
    
    return 0;
}

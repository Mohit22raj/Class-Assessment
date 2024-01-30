//Missing Numbers
//Sample Input: Array 1 to 6  1,2,4,5,6
//Sample Output: 1,2,4,5,6,3      It finds the missing number in the range of the arrray.


#include<iostream>
using namespace std;

int findMissingNumber(const int arr[], int n) {
    int expectedSum = n * (n + 1) / 2; // Sum of all natural numbers from 1 to n
    int actualSum = 0;

    // Iterate through the array and accumulate the sum
    for (int i = 0; i < n; ++i) {
        actualSum += arr[i];
    }

    // Calculate and return the missing number
    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int missingNumber = findMissingNumber(arr, n);

    cout << "The missing number is:" << missingNumber << endl;

    // Modify the original array (optional)
    arr[n] = missingNumber;
    cout << "Modified array with missing number: ";
    for (int i = 0; i < n + 1; ++i) {
        cout << abs(arr[i]) << " ";
    }
    cout << endl;

    return 0;
}

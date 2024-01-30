//Wave_Array
//Sample Input: 2,4,7,8,9,10
//Sample Output: 4,2,8,7,10,9

#include <iostream>
#include <algorithm>

using namespace std;

void wave_array(int arr[], int n) {
  // Sort the array
  sort(arr, arr + n);

  // Swap alternate elements
  for (int i = 0; i < n - 2; i += 2) {
    swap(arr[i], arr[i + 1]);
  }
}

int main() {
  int arr[] = {2, 4, 7, 8, 9, 10};
  int n = sizeof(arr) / sizeof(arr[0]);

  wave_array(arr, n);

  cout << "Wave Array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}

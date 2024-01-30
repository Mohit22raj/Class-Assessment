//Move zeros to right
//Sample input: 12,0,13,0,15
//Sample output: 12,13,15,0,0

#include <iostream>

using namespace std;

void move_zeros_to_right(int arr[], int n) {
    int write_index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[write_index++] = arr[i];
        }
    }

    // Fill remaining elements with zeros
    for (int i = write_index; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int arr[] = {12, 0, 13, 0, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    move_zeros_to_right(arr, n);

    cout << "Array after moving zeros to right: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

void reversearray(int arr[], int sz) {
    int start = 0, end = sz - 1;

    // Fix 1: Stop when pointers meet at the middle
    while (start < end) { 
        swap(arr[start], arr[end]);  //pointer
        start++;  // pointer moving forward from start
        end--;  // pointer moving forward from end
    }
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;

    reversearray(arr, sz);

    // Fix 2: Use loop variable 'i' to access each index
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
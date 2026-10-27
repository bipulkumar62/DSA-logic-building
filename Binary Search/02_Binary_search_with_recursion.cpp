//arr = [-1 , 0 , 3 , 4 , 5 , 9 , 12]  ,  target = 12.

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr , int tar) {
    int st = 0 , end = static_cast<int>(arr.size()) - 1;

    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(tar > arr[mid]) {
            st = mid + 1;
        } else if(tar <arr[mid]) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;

}

int recBinarySearch(const vector<int>& arr, int tar , int st , int end) {
    if(st <= end) {
        int mid = st + (end - st) / 2;

        if(tar > arr[mid]) {
            return recBinarySearch(arr , tar , mid+1 , end);
        } else if(tar < arr[mid]) {
            return recBinarySearch(arr , tar , st , mid-1);
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1,0,3,5,9,12};
    int tar1 = 12;

    cout << binarySearch(arr1 , tar1) << endl;

    vector<int> arr2 = {-1 , 0 , 3 , 5, 9 , 12};
    int tar2 = 0;
    cout << recBinarySearch(arr2 , tar2 , 0 , static_cast<int>(arr2.size()) - 1) << endl;
    return 0;
}
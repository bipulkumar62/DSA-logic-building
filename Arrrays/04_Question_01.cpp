// Find smallest number in array

#include <iostream>
#include <climits>
using namespace std;

int main () {

    int nums[] = {5, 15 , 4 , 7 , -6 , 7};
    int size = 6;
    
    int smallest = INT_MAX;  // +infinity possible value or maximum value

    for(int i=0; i<size; i++) {
    smallest = min(nums[i] , smallest);  // min is used when we find  smallest number in array.
    }

    cout << "smallest = " << smallest << endl;
    return 0;

}
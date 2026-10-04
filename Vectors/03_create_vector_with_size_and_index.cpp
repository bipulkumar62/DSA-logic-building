#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> vec(5,3);  // 5 = size of the vector , 3 = index value
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;

    return 0 ;
}
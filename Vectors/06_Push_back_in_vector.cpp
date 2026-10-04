#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> vec;
    cout << "Size = " << vec.size() << endl;

    vec.push_back(2);
    cout << "After push back = " << vec.size() << endl;
    return 0;
}
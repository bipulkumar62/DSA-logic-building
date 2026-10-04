#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> vec;
    cout << "Size = " << vec.size() << endl;

    vec.push_back(22);
    vec.push_back(332);
    vec.push_back(222);
    cout << "After push back = " << vec.size() << endl;

    vec.pop_back();
    
    for(int i : vec) {
        cout << i << endl;
    }
    
    return 0;
}
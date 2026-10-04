#include <iostream>
#include <vector>
using namespace std;

int main ()  {


    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << vec.capacity() << endl; // output = 4
    cout << vec.size() << endl;  // output = 3

    return 0;
}
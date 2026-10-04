#include <iostream>
#include <vector>
using namespace std;

int main ()  {


    vector<int> vec;

    vec.push_back(25);
    vec.push_back(244);
    vec.push_back(12);

    cout << vec.back() << endl;  // back function

    return 0;
}
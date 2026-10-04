// STL = it is premade library where you can import code like(vectos , queus , set etc.)

#include <iostream>
#include <vector>  // STL for use vector inn our code
using namespace std;

int main () {
    vector <int> vec; 
    cout << vec[0] << endl;  // shoes segmentation error because vector cant have 0 value.
}
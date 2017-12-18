#include <iostream>
#include "random_string.hpp"

using namespace std;

int main() {
    Random_string rs;
    vector<string> l = rs.random_strings(16, 64);
    for (auto& k : l){
        cout << k << endl;
    }
    return 0;
}
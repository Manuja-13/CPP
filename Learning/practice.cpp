#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
int count;


int main() {
    string input;
    cin >> input;
    vector<char> arr(input.begin(),input.end());
    for (char c:arr){cout << c<< " ";}
    return 0;
}

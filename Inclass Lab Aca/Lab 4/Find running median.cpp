//
// Created by user on 2/19/2025.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
//#include <cstdio>

using namespace std;

void printArr(vector<int> &arr) {
    for (int i:arr) {
        cout << i << " ";
    }
    cout << "\t";
}
int main() {
    vector<int> arr;
    string str;
    getline(cin,str);
    stringstream ss(str);
    int num;
    while (ss>>num) {
        arr.push_back(num);
        sort(arr.begin(),arr.end());
        int l = arr.size();
        // even case
        if (l%2==0) {
            printArr(arr);
            printf("%.1f\n", static_cast<double>(arr[l/2-1]+arr[l/2])/2.0);

        }
        // odd cae
        else {
            printArr(arr);
            printf("%.1f\n", static_cast<double>(arr[l/2]));
        }
    }

}

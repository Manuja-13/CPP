#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void mergeSort(vector<int> &arr) {
    int l = arr.size();
    if (l>1) {
        int mid = l/2;
        vector<int> leftArr(arr.begin(),arr.begin()+mid);
        vector<int> rightArr(arr.begin()+mid,arr.begin()+l);
        mergeSort(leftArr);
        mergeSort(rightArr);
        int i=0,j=0,k=0;
        while (i<leftArr.size() && j<rightArr.size()) {
            if (leftArr[i]<rightArr[j]) {
                arr[k]=leftArr[i];
                i++;
            }
            else {
                arr[k]=rightArr[j];
                j++;
            }
            k++;
        }
        while (i<leftArr.size()) {
            arr[k]=leftArr[i];
            i++;
            k++;
        }
        while (j<rightArr.size()) {
            arr[k]=rightArr[j];
            j++;
            k++;
        }
    }
}

vector<int> collectNumbers() {
    vector<int> arr;
    string input;
    getline(cin,input);
    istringstream ss(input);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    vector<int> numbers = collectNumbers();
    for (auto i:numbers) {cout << i << " ";}cout << endl;
    mergeSort(numbers);
    for (auto j:numbers) {cout << j << " ";}cout << endl;
    return 0;
}
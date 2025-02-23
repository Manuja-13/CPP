#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int>& arr,int& x) {
    int length = arr.size();
    if (length==0) {return false;}
    int mid=length/2;
    vector <int> left(arr.begin(),arr.begin()+mid);
    vector <int> right(arr.begin()+mid+1,arr.end());
    if (arr[mid]==x){return true;}
    else if (x<arr[mid]){return binarySearch(left,x);}
    else if(x>arr[mid]){return binarySearch(right,x);}
}

int main() {
    int x = 789;
    vector<int> numbers={1,2,3,4,8,9,11,55,88,99,45,89,456,789};
    if (binarySearch(numbers,x)){cout << "Found!" << endl;}
    else{cout << "Not Found!" << endl;}
}
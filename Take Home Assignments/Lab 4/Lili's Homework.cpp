#include <iostream>
#include <vector>
#include <sstream>

int glb=0;
using namespace std;

int partition2(vector<int>& arr,int first,int last) {
    int i = first;
    int x = arr[last];
    for (int j=first;j<last;j++) {
        if (arr[j]<=x) {
            swap(arr[i++],arr[j]);   glb++;
        }
    }
    swap(arr[i],arr[last]);  glb++;
    return i;
}
void quickSort(vector<int>& arr,int first, int last) {
    if (first<last) {
        int splitPoint = partition2(arr,first,last);
        quickSort(arr,first,splitPoint-1);
        quickSort(arr,splitPoint+1,last);
    }
}

void insertionSort(vector<int>& numbers) {
    for (int i=1;i<numbers.size();i++) {
        int temp=numbers[i];
        int j = i;
        while (j>0 && numbers[j-1]>numbers[j]) {
            swap(numbers[j],numbers[j-1]);glb++;
            j--;
        }
        numbers[j]=temp;
    }

}
void bubbleSort(std::vector<int>& arr){
    for (int i=arr.size()-1;i>0;i--){
        for (int j=0;j<i;j++){
            if (arr[j]>arr[j+1]) {std::swap(arr[j],arr[j+1]);glb++;}
        }
    }
}

void selectionSort(std::vector<int> arr){
    size_t  n = arr.size();
    for (size_t i = 0;i<n-1;i++){
        size_t minIndex = i;
        for(size_t j = i+1;j<n ;j++){
            if (arr[j] < arr[minIndex]){minIndex = j;}

        }
        if(minIndex != i){
            std::swap(arr[i],arr[minIndex]);glb++;
        }
    }
}


int main() {
    vector<int> numbers;
    int n;
    string input;
    cin >> n;
    cin.ignore();
    getline(cin,input);
    stringstream ss(input);
    int num;
    while (ss>>num) {
        numbers.push_back(num);
    }
    selectionSort(numbers);
    cout<<glb<<endl;

}
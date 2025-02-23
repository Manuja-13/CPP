#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

void selectionSort(vector<int>& arr){
    size_t  n = arr.size();
    for (size_t i = 0;i<n-1;i++){
        size_t minIndex = i;
        for(size_t j = i+1;j<n ;j++){
            if (arr[j] < arr[minIndex]){minIndex = j;}

        }
        if(minIndex != i){
            swap(arr[i],arr[minIndex]);
        }
    }
}

int main(){
    // Start time
    auto start = std::chrono::high_resolution_clock::now();
    vector<int> numbers={15, 41, 9, 85, 47, 41, 56, 12, 80, 65, 59, 95, 95, 81, 81, 60, 8, 35, 24, 43, 27, 83, 40, 11, 11, 66, 44, 47, 65, 99};/*
    int num;
    while(cin >> num){
        numbers.push_back(num);
        if(cin.peek() == '\n'){
            break;
        }
    }*/
    selectionSort(numbers);
    for(size_t i=0; i < numbers.size();i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
    // End time
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate duration in milliseconds
    std::chrono::duration<double, std::milli> duration = end - start;

    std::cout << "Time taken: " << duration.count() << " ms" << std::endl;
    return 0;
}
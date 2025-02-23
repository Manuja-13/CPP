#include <iostream>
#include <sstream>
#include <string>
#include <vector>


void selectionSort(std::vector<int> arr){
    size_t  n = arr.size();
    for (size_t i = 0;i<n-1;i++){
        size_t minIndex = i;
        for(size_t j = i+1;j<n ;j++){
            if (arr[j] < arr[minIndex]){minIndex = j;}

        }
        if(minIndex != i){
            std::swap(arr[i],arr[minIndex]);
        }
    }
}

std::vector<int> collectNumbers() {
    std::vector<int> numbers;
    std::string input;
    std::getline(std::cin,input);
    std::istringstream iss(input);
    int num;
    while(iss >> num) {
        numbers.push_back(num);
    }
    return numbers;
}

int main() {
    // creating the integer vector
    std::vector<int> numbers = collectNumbers();

    // sorting
    selectionSort(numbers);
    // print the numbers seperated by spaces
    for (int i:numbers){std::cout << i << " ";}std::cout << std::endl;

}
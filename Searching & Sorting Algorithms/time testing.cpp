#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <chrono>

void bubbleSort(std::vector<int>& arr){
    for (int i=arr.size()-1;i>0;i--){
        for (int j=0;j<i;j++){
            if (arr[j]>arr[j+1]) {std::swap(arr[j],arr[j+1]);}
        }
    }
}
/*
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
*/
int main() {
    // Start timing
    auto start = std::chrono::high_resolution_clock::now();

    // creating the integer vector
std::vector<int> numbers = {1, 391, 647, 136, 532, 405, 281, 538, 27, 412, 413, 284, 808, 686, 175, 688, 565, 693, 185, 441, 701, 453, 198, 966, 199, 712, 588, 335, 986, 475, 346, 731, 478, 990, 480, 225, 226, 868, 997, 231, 616, 744, 498, 371, 628, 499, 634, 507};    bubbleSort(numbers);
    // print the numbers seperated by spaces
    for (int i:numbers){std::cout << i << " ";}std::cout << std::endl;

    // End timing
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate duration
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    // Output the time taken
    std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;

}
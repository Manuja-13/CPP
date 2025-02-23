#include <iostream>
#include <sstream>
#include <string>
#include <vector>

void bubbleSort(std::vector<int>& arr){
  for (int i=arr.size()-1;i>0;i--){
    for (int j=0;j<i;j++){

      if (arr[j]>arr[j+1]) {
          std::swap(arr[j],arr[j+1]);

      }
    }
  }
  }
// 1 2 7 6 4 3 8 2 9 0 5

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
    bubbleSort(numbers);
    // print the numbers seperated by spaces
    for (int i:numbers){std::cout << i << " ";}std::cout << std::endl;

}

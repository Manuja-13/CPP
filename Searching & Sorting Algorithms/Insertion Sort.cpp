#include <iostream>
#include <sstream>
#include <string>
#include <vector>


void insertionSort(std::vector<int>& numbers) {
  for (int i=1;i<numbers.size();i++) {
    int temp=numbers[i];
    int j = i;
    while (j>0 && numbers[j-1]>numbers[j]) {
      std::swap(numbers[j],numbers[j-1]);
      j--;
    }
    numbers[j]=temp;
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
  insertionSort(numbers);
  // print the numbers seperated by spaces
  for (int i:numbers){std::cout << i << " ";}std::cout << std::endl;

}


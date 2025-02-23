#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    for (size_t i=arr.size()-1;i>0;i--) {
        for (size_t j=0;j<i;j++) {
            if (arr[j]>arr[j+1])
            {std::swap(arr[j],arr[j+1]);}
        }
    }
}

void sequentialSearch(const std::vector<int>& arr,const int& x) {
    for (int i:arr) {
        if (i==x){std::cout << "Yes"; return;}

    }
    std::cout << "No";
}

int main() {
    std::vector<int> numbers{1,2,47,8,6,4,585,88,9,6,1,4};
    bubbleSort(numbers);
    int num;
    std::cin >> num;
    sequentialSearch(numbers,num);
    return 0;
}

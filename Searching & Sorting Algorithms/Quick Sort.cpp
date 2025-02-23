#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

int partition2(vector<int>& arr,int first,int last) {
    int i = first;
    int x = arr[last];
    for (int j=first;j<last;j++) {
        if (arr[j]<=x) {
            swap(arr[i++],arr[j]);
        }
    }
    swap(arr[i],arr[last]);
    return i;
}
/*
int partition(vector<int>& arr,int first,int last) {
    int pivotValue = arr[first];
    int leftMark = first+1;
    int rightMark = last;
    bool done = false;

    while (not done) {
        while (leftMark<=rightMark && arr[leftMark]<=pivotValue){leftMark++;}
        while (leftMark<=rightMark && arr[rightMark]>=pivotValue){rightMark--;}
        if (rightMark<=leftMark) {
            done = true;
        }
        else {
            swap(arr[leftMark],arr[rightMark]);
        }
    }
    swap(arr[first],arr[rightMark]);
    return rightMark;
}
*/
void quickSort(vector<int>& arr,int first, int last) {
    if (first<last) {
        int splitPoint = partition2(arr,first,last);
        quickSort(arr,first,splitPoint-1);
        quickSort(arr,splitPoint+1,last);
    }
}

int main() {

    auto start = std::chrono::high_resolution_clock::now();  // Start time








vector<int> numbers{45, 807, 448, 262, 274, 546, 412, 235, 107, 828, 690, 605, 32, 752, 313, 345, 33, 929, 705, 856, 814, 206, 375, 692, 967, 344, 319, 376, 948, 953, 384, 66, 587, 254, 482, 776, 858, 961, 532, 732, 486, 536, 35, 795, 300, 341, 487, 963, 588, 859};


    quickSort(numbers,0,numbers.size()-1);
    // for (int i:numbers){cout<<i<< " ";}cout << endl;



    auto stop = std::chrono::high_resolution_clock::now();   // End time

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "Execution Time: " << duration.count() << " ms" << std::endl;

    return 0;
}

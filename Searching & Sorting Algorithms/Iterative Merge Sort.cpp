#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr,vector<int> &temp,int left,int mid,int right) {
    int i=left,j=mid,k=left;
    while (i<mid && j<right) {
        if (arr[i]<arr[j]){temp[k++]=arr[i++];}
        else{temp[k++]=arr[j++];}
    }
    while (i<mid){temp[k++]=arr[i++];}
    while (j<right){temp[k++]=arr[j++];}
    for (int p=left;p<right;p++){arr[p]=temp[p];}
}

void iterativeMergeSort(vector<int> &arr) {
    int l=arr.size();
    vector<int> temp(l);
    for (int width=1;width<l;width*=2) {
        for (int i=0;i<l;i=i+width*2) {
            int left=i;
            int mid=min(i+width,l);
            int right=min(i+width*2,l);
            merge(arr,temp,left,mid,right);
        }
    }
}

int main() {
    vector<int> numbers{8,5,2,4,5,5,5,84,148,595,2,84,63,3,4,};
    iterativeMergeSort(numbers);
    for (int i:numbers){cout<< i<< " ";}cout<< endl;
}
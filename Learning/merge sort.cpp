#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void mergeSort(vector<int> &A, int p, int r);
void merge(vector<int> &A,int p ,int q, int r);

int main() {
    vector<int> numbers{1,2,4,6,4,55,1,4,5,1,4,15,7,7,88,9,22,4};
    mergeSort(numbers,0,numbers.size()-1);
    for (int i:numbers){cout << i << " ";}cout << endl;
}

void mergeSort(vector<int> &A, int p, int r) {
    int l=r-p+1;
    if (l>1) {
        int q=(p+r)/2;
        mergeSort(A,p,q);
        mergeSort(A,q+1,r);
        merge(A,p,q,r);
    }
}

void merge(vector<int> &A,int p,int q, int r) {
    int n1 = q-p+1;
    int n2 = r-q;
    vector<int> L(n1+1),R(n2+1);

    for (int i=0;i<n1;i++) {
        L[i]=A[p+i];
    }
    for (int j=0;j<n2;j++) {
        R[j]=A[(q+1)+j];
    }

    L[n1]= INT_MAX;
    R[n2]= INT_MAX;
    int i=0,j=0;
    for (int k=p;k<=r;k++) {
        if (L[i]<R[j]) {
            A[k]=L[i];
            i++;
        }else {
            A[k]=R[j];
            j++;
        }
    }
}
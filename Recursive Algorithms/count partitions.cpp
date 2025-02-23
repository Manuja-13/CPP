//
// Created by user on 2/16/2025.
//
#include <iostream>
using namespace std;

int countPartitions(int n,int m) {
    // base cases
    if (n==0){return 1;}
    if (n<0 || m==0){return 0;}
    // recursive case
    return countPartitions(n-m,m)+countPartitions(n,m-1);
}
int main() {
    int n,m;
    cin >> n >> m;
    cout << countPartitions(n,m);
}
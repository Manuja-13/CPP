//
// Created by user on 2/14/2025.
//
#include <iostream>
#include <cmath>

using namespace std;

int powerSum(int n,int k,int x) {
    if (n==0){return 1;}
    if (n<0 or x==0){return 0;}

    int include = powerSum(n-pow(x,k),k,x-1);
    int exclude = powerSum(n,k,x-1);
    return include+exclude;
}
int main() {
    cout << powerSum(100,2,10) << endl;
}
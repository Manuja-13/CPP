#include <iostream>
using namespace std;

int intSum(int n) {
    // base case
    if (n==0){return 0;}
    // recursive case
    return n+intSum(n-1);
}
int main() {
    cout<<intSum(5)<< endl;

}

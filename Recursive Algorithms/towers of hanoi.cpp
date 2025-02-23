//
// Created by user on 2/16/2025.
//
# include <iostream>

using namespace std;

void towersOfHanoi(int n, int size, char pole1, char pole2, char pole3) {
    // base case
    if (size == 1) { cout << "Disk " << n << " pole " << pole1 << " to pole " << pole3 << endl; }
    // recursive case
    else {
        towersOfHanoi(n - 1, size - 1, pole1, pole3, pole2);
        towersOfHanoi(n, 1, pole1, pole2, pole3);
        towersOfHanoi(n - 1, size - 1, pole2, pole1, pole3);
    }
}

int main() {
    int n = 6;
    towersOfHanoi(n, n, 'A', 'B', 'C');
}

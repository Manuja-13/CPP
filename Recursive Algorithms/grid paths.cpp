//
// Created by user on 2/16/2025.
//
#include <iostream>
using namespace std;


int gridPath(int n, int m, int i, int j) {
    if (i == n && j == m) { return 1; }
    if (i > n or j > m) { return 0; }
    int right = gridPath(n, m, i, j + 1);
    int down = gridPath(n, m, i + 1, j);
    return right + down;
}

int main() {
    int n,m;
    cin >> n >> m;
    cout << gridPath(n, m, 1, 1);
}

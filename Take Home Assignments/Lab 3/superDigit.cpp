#include <iostream>

using namespace std;

int superDigit(string n, int k) {
    // base case
    if (n.length()==1){return stoi(n);}
    int sum=0;
    for (char c:n){sum+=c-'0';}
    sum*=k;
    return superDigit(to_string(sum),1);

}

int main() {
    int i = superDigit("9875",4);
    cout << i << endl;
}
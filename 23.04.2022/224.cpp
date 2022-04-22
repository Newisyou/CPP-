#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    ifstream input("INPUT.txt");
    ofstream output("OUTPUT.TXT");
    long long n;
    input >> n;

    vector<long long> vec(n);
    for (int i = 0; i < n; ++i)
        input >> vec[i];

    sort(vec.begin(), vec.end());
    long long num1, num2;
    num1 = vec[n - 1] * vec[n - 2] * vec[n - 3];
    num2 = vec[n - 1] * vec[0] * vec[1];

    output << max(num1, num2);
}
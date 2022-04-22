#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    std::cin >> n;
    vector<int>number;
    vector<int>result(n);
    for (int i = 0; i < n;++i) {
        int k;
        cin >> k;
        number.push_back(k);
    }
    for (int i = 1; i < n;++i) {
        for (int k = 0; k < i;++k) {
            if (number[i] > number[k]) {
                if (result[k] >= result[i]) {
                    result[i] = result[k];
                }
                result[i]++;
            }
        }
    }
    int max = 1;
    for (int i = 0; i < n;++i) {
        if (result[i] > max) {
            max = result[i];
        }
    }
    cout << max << endl;

}
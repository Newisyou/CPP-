#include <iostream>

using namespace std;

int main() {
    string n;
    long long k;
    cin >> n;
    cin >> k;
    int i = 0;
    long long res = 0;
    while (i < n.length()) {
        while (res < k)
            res = res * 10 + n[i++] - '0';
        res = res % k;
    }
    cout << res;
}
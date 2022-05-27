#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    ifstream input("INPUT.txt");
    size_t n, k, ans;
    string word;
    input >> n >> k >> word;
    if (k == n) {
        ans = n;
        for (int i = 2; i < n; ++i) {
            if (n % i == 0) { ans += n / i + 1; }
            else { ans += n / i + 2; }
        }
        cout << ans;
        return 0;
    }
    ans = n;
    for (int i = 1; i < k + 1; ++i)
    {
        ans += tgamma(i + 2);
    }
    for (int count = k + 2; count < n; ++count) {
        for (int i = 0; i < n - count + 1; ++i) {
            for (int j = i; j < i + count / 2; ++j) {
                size_t temp = 0;
                if (word[j] != word[count - j - 1]) { temp++; }
                if (temp > k) { break; }
                if (j >= count / 2 - 1) { ans++; break; }
            }
        }
    }

}
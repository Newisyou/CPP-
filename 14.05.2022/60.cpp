#include <iostream>

using namespace std;

bool prime(int n) {
    if (n == 1) return false;
    int m = 2;
    while (m * m <= n) {
        if (n % m == 0)
            return false;
        m += 1;
    }
    return true;
}



int main() {
    int k;
    cin >> k;
    int i= 1;
    int sprime = 0;
    int n = 2;
    while (true) {
        if (prime(n)) {
            if (prime(i)) {
                sprime++;
                if (k == sprime) {
                    cout << n;
                    break;
                }
            }
            i++;
        }
        n++;
    }

}
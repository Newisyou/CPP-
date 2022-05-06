#include <iostream>


using namespace std;

int s(int a, int b) {
    while (a != 0 && b != 0) { if (a > b) { a %= b; } else { b %= a; } }
    return a + b;
}


int main() {
    int n;
    cin >> n;
    for (int i = n / 2; i >= 1; --i) {
        if (s(i, n - i) == 1) {
            cout << i << " " << n - i;
        }
    }

}
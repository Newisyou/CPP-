#include <iostream>


using namespace std;

int main() {
    unsigned short int n;
    unsigned int a[10];
    cin >> n;
    unsigned short int x = n;
    if (n == 0 || n == 1)
        cout << -1 << " " << -1;

    for (int i = 9; i > 1; --i) {
        a[i] = 0;
        while (n % i == 0) {
            n /= i;
            a[i]++;
        }
    }

    if (n == 1) {
        for (int i = 2; i <= 9; ++i) {
            while (a[i]) {
                a[i]--;
                cout << i;
            }
        }
        cout << " ";
    }
    else {
        cout << -1 << " " << -1;
    }

    for (int i = 2; i <= 7; ++i) {
        while (x % i == 0) {
            x /= i;
            a[i]++;
        }
    }
    for(int i=7; i>1; --i)
    {
        while (a[i]) {
            cout << i;
            a[i]--;
        }
    }
    return 0;
}
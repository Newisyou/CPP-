#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ifstream input("input.txt");

    int N;
    input >> N;

    float usd, eur, kUsd, kEur, sum;
    sum = 100;
    input >> kUsd >> kEur;

    for (int i = 0; i < N - 1; ++i) {
        input >> usd >> eur;
        if (kUsd < usd || kEur < eur)
            sum = max(((sum - kUsd * (sum / kUsd)) + (sum / kUsd) * (usd)),
                      ((sum - kEur * (sum / kEur)) + (sum / kEur) * (eur)));

        kUsd = usd;
        kEur = eur;
    }

    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;


int n;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");
    input >> n;
    if (n == 1){
        output << 0;
        return 0;
    }
    vector <int> Val;
    vector <int> heightDif;
    vector <int> superJump;
    vector <int> sum;
    input >> Val[1] >> Val[2];
    if (n == 2) {
        output << abs(Val[2] - Val[1]);
        return 0;
    }
    sum[2] = abs(Val[2] - Val[1]);
    for (int i = 3; i <= n;i++) {
        input >> Val[i];
        heightDif[i] = abs(Val[i] - Val[i - 1]);
        superJump[i] = 3 * abs(Val[i] - Val[i - 2]);
        sum[i] = min(sum[i - 2] + superJump[i], sum[i - 1] + heightDif[i]);
    }
    output << sum[n];
}
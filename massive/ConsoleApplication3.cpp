#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector <double> mass1;
    int I = 0;
    double sum = 0;

    ifstream file("in.txt");
    if (!file)
        cout << "problem" << endl;


    while (!file.eof()) {
        double a;
        file >> a;
        mass1.push_back(a);
        I++;
        sum += a;
    }

    cout << sum << endl;

    sort(mass1.begin(), mass1.end());
    for (int i = 0; i < mass1.size(); i++) {
        cout << mass1[i] << "   ";
    }
    cout << endl;
    cout << sum / mass1.size() << endl;
};
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream input("input.txt");
    int n, h1, m1, h2, m2, answ = 0;
    input >> n;
    vector<int> vec(1440);
    for (int i = 0; i < n; ++i) {
        input >> h1 >> m1 >> h2 >> m2;
        int t1 = h1 * 60 + m1;
        int t2 = h2 * 60 + m2;
        if (t1 >= t2) {
            for (int j = t1; j < 1440; ++j)
                vec[j]++;
            for (int j = 0; j < t2; ++j)
                vec[j]++;
        }
        else
            for (int j = t1; j < t2; ++j)
                vec[j]++;
    }
    for (auto c : vec)
        if (c == n)
            ++answ;
    cout << answ;
}
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    int m, n;
    int a[50];
    input >> m >> n;
    for (int i = 0; i < m; i++)
        a[i] = 1;
    for (int i = m; i <= n; i++)
        a[i] = a[i - 1] + a[i - m];
    cout << a[n];
    output<< a[n];
}
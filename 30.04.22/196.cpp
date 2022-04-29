#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int number = 0;
    int** mas = new int* [n];

    for (int i = 0; i < n; ++i)
        mas[i] = new int[n];

    int stop;
    if (n % 2 == 0)
        stop = n / 2;
    else
        stop =  n/ 2 + 1;

    for (int i = 0; i < stop; i++)
    {
        for (int j = i; j < n - i; j++)
            mas[i][j] = ++number;

        for (int j = i + 1; j < n - i; j++)
            mas[j][n - i - 1] = ++number;

        for (int j = i + 1; j < n - i; j++)
            mas[n - i - 1][n - j - 1] = ++number;

        for (int j = i + 1; j < n - i - 1; j++)
            mas[n - j - 1][i] = ++number;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << mas[i][j] << " ";
        cout << endl;
    }

}
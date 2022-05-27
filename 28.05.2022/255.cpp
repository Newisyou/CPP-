#include <iostream>
#include <cmath>
#include<fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");
    int n, i = 1;
    input >> n;
    for (int j = 2; i <= sqrt(n); ++j)
    {
        if (n % j == 0)
        {
            for (i <= sqrt(n); ++i; )
            {
                if (n % i == 0)
                {
                    break;
                }
            }
            cout << n / i << ' ' << n - (n / i) << endl;
            return 0;
        }
    }
    cout << 1 << ' ' << n - 1 << endl;
    return 0;
}
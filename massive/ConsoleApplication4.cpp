#include <ctime>
#include <iostream>
using namespace std;

void main()
{
    srand(time(0));
    double sum = 0;
    int mass[1000];
    for (int i = 0; i < 1000; i++) {
        int a = -100 + rand() % 201;
        mass[i] = a;
        sum += a;
    }

    for (int i = 0; i < 20; i++) {
        cout << mass[i] << endl;
    }

    cout<<endl;
    cout << sum << endl;
    float result = sum / 1000;
    cout <<result<<endl;
}


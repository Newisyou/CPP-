#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int startPet, addPet, startTax, addTax;
    cin >> startPet >> addPet >> startTax >> addTax;
    int i = 0;
    bool x = 1;


    while (x != 0)
    {

        if (abs(startPet - startTax) < addPet || abs(startPet - startTax) < addTax) {
            cout << "result " << max(startPet, startTax);
            x = 0;
        }
        else
            if (startTax - addTax < startPet) {
                cout << "result " << startPet;
                x = 0;
            }

            else
                if (startPet == startTax) {
                    cout << "result " << startPet;
                    x = 0;
                }
        startPet = startPet + addPet;
        startTax = startTax - addTax;

    }
}
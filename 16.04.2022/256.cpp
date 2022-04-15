#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input("input.txt");
    if (!input.is_open())
    {
        cout << "ERROR!" << endl;
        return -1;
    }
    int n, t;
    input >> n;
    char symbol;
    int x=0,z=0, minim=0;
    for (int i = 0; i < n; i++) {
        input >> symbol;
        if (symbol == 'X') {
            input >> t;
            x += t;
        }
        else if (symbol == 'Y') {
            input >> t;
            x += t;
            z += t;
        }
        else {
            input >> t;
            z += t;
        }
    }
    if ((x > 0) and (z > 0))
        minim = min(x, z);
    if ((x < 0) and (z < 0))
        minim = max(x, z);
    x -= minim;
    z -= minim;
    cout << x + minim + z;

}

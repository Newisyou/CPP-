#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void Out(const vector <long int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    ifstream input("input.txt");
    vector <long int> l;
    vector <long int> r;

    string s;
    long int n, k = 1;
    int t;
    input >> s >> n;
    while (n > 0)
    {
        t = n % 3;
        if (t == 2)
        {
            l.push_back(k);
            n += 3;
        }
        else if (t == 1)
            r.push_back(k);
        n = n / 3;
        k = k * 3;
    }
    if (s == "L")
    {
       cout << "L:";
        Out( l);
        cout << "R:";
        Out( r);
    }
    else
    {
        cout << "L:";
        Out( r);
        cout << "R:";
        Out( l);
    }
    return 0;
}
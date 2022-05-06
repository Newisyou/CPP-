#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> c; vector<int> z;
    c.push_back(0); c.push_back(1);
    z.push_back(1); z.push_back(1);
    for(int i = 0; i < n - 1; ++i){
        for(int j = 0; j < c.size() - 1; ++j){
            if(z[j] + z[j + 1] <= n){
                c.insert(c.begin() + j + 1, c[j] + c[j + 1]);
                z.insert(z.begin() + j + 1, z[j] + z[j + 1]);
                ++j;
            }
        }
    }
    for(int i = 1; i < c.size() - 1; ++i)
        cout << c[i] << "/" << z[i] << endl;
    return 0;
}
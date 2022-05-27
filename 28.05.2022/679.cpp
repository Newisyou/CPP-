#include <iostream>

using namespace std;

int n;

int main(){
    int count2 = 0, counter3= 0;
    cin >> n;
    while (n % 3 > 0 && n > 0){
        n -= 2;
        count2++;
    }
    counter3+= n / 3;
    if (count2> 0)
        cout << 2 << ' ' << count2;
    if (count2 > 0 && counter3 > 0)
        cout << ' ';
    if (counter3> 0)
        cout << 3 << ' ' << counter3;
    return 0;
}
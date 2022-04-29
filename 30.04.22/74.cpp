#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

int n=9, m=5;
int num=2;
int temp;
int result=0;
vector<int>sport;
for(int i=0; i<n;i++){
    sport.push_back(i+1);
}

    while (sport.size() > 1) {
        temp = 1;
        for (int i = 1; i <= sport.size(); ++i) {
            if (temp%2==0 && sport[i-1] == m) {
                cout << num << endl;
                result = 1;
                break;
            }
            else if (temp % 2 == 0) {
                sport.erase(sport.begin() + (i-1));
                num++;
                i++;
            }
            temp++;
        }
        if (result == 1) {
            break;
        }
    }
    if (sport.size() == 1) {
        cout << n << endl;
    }

}

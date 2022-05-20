#include <iostream>
#include <fstream>
#include <vector>
#include <string>


using namespace std;

int main()
{
    ifstream input("input.txt");
    int n;
    input >> n;
    for (int i = 0; i < n; i++){
        int a, b;
        input >> a >> b;
        int c, d;
        input >> c >> d;
        int flag = 0;
        while (b != 0){
            if (b > a){
                swap(a, b);
            }
            if (a == c && b == d){
                flag = 1;
            }
            a = a - b;
            if (a == c && b == d){
                flag = 1;
            }
        }
        if (flag == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;;
        }
    }
}
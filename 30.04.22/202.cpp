#include <iostream>
#include <string>
#include <fstream>


using namespace std;



int main() {
    ifstream input("INPUT.txt");
    ofstream output("OUTPUT.txt");
    string str, sub;
    bool bFlag;
    input >> str;
    input >> sub;
    for (int i = 0; i < str.size() - sub.size() + 1; ++i) {
        bFlag = false;
        for (int j = 0; j < sub.size(); ++j) {
            if (str[i + j] != sub[j]) {
                bFlag = true;
                break;
            }
        }
        if (!bFlag) {
            output << i << " ";
        }
    }
    output.close();
}
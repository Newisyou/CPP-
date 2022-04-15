#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ifstream input("input.txt");
    if (input.is_open())
        cout << "i am opened\n\n" << endl;

    int m, result=0;
    input>>m;
    vector <string> str;
    for (int i=0; i<m; i++){
        string t;
        input>>t;
        str.push_back(t);
    }
    sort(str.begin(), str.end());
    int max=0;
    for(int i=0; i<m;i++){
        //cout<<str[i]<<endl;
        string s=str[i];
        string n=str[i+1];
        int xl=0;
        for (int j=0;j<s.size();j++){
            if (s[j]==n[j]){
                xl+=1;
            }
        }
        if(xl>max){max=xl;
        result=max;}
    }
    cout<<result;
}

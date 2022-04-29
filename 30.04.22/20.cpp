#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
ifstream input("C:\\Users\\sapfi\\CLionProjects\\untitled15\\input.txt");
int n;
input>>n;
vector <int> number;
for (int i=0; i<n; i++){
    int t;
    input>>t;
    number.push_back(t);
}
int cur;
int prev=cur;
int prevprev=prev;
int len=1;
int maxlen=1;
for (int i=2; i<=n;i++){
    prevprev=prev;
    prev=cur;
    cur=number[i];
    if((prev>cur && prev>prevprev) ||(prev<cur && prev<prevprev)){
        len++;
    }
    else if (prev!=cur){
        len=2;
    }
    else len=1;
    maxlen =max(maxlen, len);
}
cout<<maxlen;
}

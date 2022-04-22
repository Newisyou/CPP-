#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
long double fact(int N)
{
    if(N < 0)
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact(N - 1); 
}

int main() {
    string s;
    cin>>s;
    int m=s.length();
    int result;
    result=fact(m);
    vector<int> let(15);
    char n;
    for(int i=0; i<s.size();i++){
        let[i]=1;
        if(s[i]==n){
            let[i]=0;
        }
        for (int j=i+1;j<s.size();j++)
        if(s[i]==s[j]){
            let[i]+=1;
            n=s[i];
        }
    }
    for(int i=0; i<s.size(); i++){
        result=result/fact(let[i]);
    }
    cout<<result;

};

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    
    int n;
    input>>n;
    
    if((n==1) or (n==2) or (n==12)){
        output<<"Winter";
    }
    else if((n==3) or (n==4) or (n==5)){
        output<<"Spring";
    }
    else if((n==6) or (n==7) or (n==8)){
        output<<"Summer";
    }
    else if((n==9) or (n==10) or (n==11)){
        output<<"Autumn";
    }
    else
    output<<"You are a error";
}

#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    
    int n;
    input>>n;
    int a[3]={};
    int b[3]={};
    
    for (int i = 0; i < 3; ++i) {
        input>>a[i];
    }
    
	
	for (int i = 0; i < 3; ++i) {
		input >> b[i];
	}
	
	sort(a, a+3);
	sort(b, b+3);
	int s = 0;
	for (int i = 0; i < 3;++i) {
		s += a[i] * b[i];

	}
	output << s << endl;
}

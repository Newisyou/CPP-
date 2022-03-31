#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream input("input.txt");
    ofstream output("output.txt");
    
    int n;
    input>>n;
    vector<int>result;
    
    for (int i = 0; i < n; ++i) {
		int a;
		input >> a;
		result.push_back(a);
	}
	for (int i = result.size() - 1; i >= 0; --i) {
		output << result[i] << " ";
	}
    
}

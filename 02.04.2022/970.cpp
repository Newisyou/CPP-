#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input("input.txt");   
  int a,b,c;
  input>>a>>b>>c;
  ofstream output("output.txt");
  if (a+b==c){
    output<<"YES";
  }
  else output<<"NO";
}

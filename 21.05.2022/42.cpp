#include <iostream>
#include <fstream>
using namespace std;

int main() {
ifstream input("input.txt");
int n;
input>>n;
long int power=1;
while(n!=4){
    power=power*3;
    n-=3;
}
power*=n;
cout<<power;
};
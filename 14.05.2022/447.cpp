#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 1)
        return 1;
    return f(n-1)*n;
}
int main() {
int n;
cin>>n;
n=f(n);
int res=0;
while(res==0){
    res=n%10;
    n=n/10;
}
    cout<<res;
}

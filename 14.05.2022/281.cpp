#include <iostream>


using namespace std;

int factorial(int i)
{
    if (i==0){
        return 1;
    }
    else{
        return i*factorial(i-1);
    }
}

int main()
{
    int n, m;
    cin >> n;
    cin>>m;
    int answer = 0;
    for (int i = m; i <= n; i++){
        answer += factorial(n) / (factorial(i) * factorial(n - i));
    }
    cout << answer;
    return 0;
}
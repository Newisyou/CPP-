#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

int main() {
    ifstream input("input.txt");

    int N, i, j, k, f, s;
    queue<int> que;

    input >> N;
    int** mas = new int* [N];
    int* temp = new int[N];

    for (i = 0; i < N; ++i)
    {
        temp[i] = 1000000000;
        mas[i] = new int[N];

        for (j = 0; j < N; ++j)
            input >> mas[i][j];
    }

    input >> s >> f;
    --s;
    --f;
    temp[s] = 0;
    que.push(s);

    while (!que.empty())
    {
        i = que.front();
        que.pop();

        for (j = 0; j < N; ++j)
            if (mas[i][j] && temp[j] > temp[i] + 1)
            {
                temp[j] = temp[i] + 1;
                que.push(j);
            }
    }

    if (temp[f] < 1000000000)
        cout << temp[f] << endl;

    else
        cout << -1 << endl;


    return 0;
}
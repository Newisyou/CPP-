#include <iostream>
#include <fstream>

using namespace std;

void sort(int arr[],int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main()
{

    int child, sweet;

    ifstream input("input.txt");
    input >> child >> sweet;

    int* ch = new int[child] {};

    for (int i = 0; i < child; ++i) {
        input >> ch[i];
    }


    while (sweet != 0) {
        sort(ch, child);
        ch[0]++;
        sweet--;
    }

    sort(ch, child);
    cout << ch[0];

    cout << ch[0];

}
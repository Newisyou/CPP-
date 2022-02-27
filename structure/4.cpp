#include <iostream>
#include <string> 
using namespace std;

struct Student
{
    int age;
    string name;
    string drink;
}​​​​​;

int main()
{
    const int number = 5;
    Student stud[number] = {};
    stud[0] = { 19, "Alpa", "Tea" };
    stud[1] = { 22, "Duc", "water" };
    stud[2] = { 21, "Krib", "coffee" };
    stud[3] = { 23, "Rad", "orange juice" };

    string names[5];

    for (int i = 0; i < number; i++) {
        reverse(stud[i].name.begin(), stud[i].name.end());
        //cout << stud[i].name << endl;
        names[i] = stud[i].name;
    }

    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < 3 - i - 1; ++j) {
            if (names[j] > names[j + 1]) {
                swap(names[j], names[j + 1]);
            }
        }
    }

    for (int i = 0; i < number; ++i)
    {
        cout << names[i] << endl;
    }


    
}
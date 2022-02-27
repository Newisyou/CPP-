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
    stud[0] = { 19, "Kris", "Tea" };
    stud[1] = { 22, "Tess", "water" };
    stud[2] = { 21, "Ed", "coffee" };
    stud[3] = { 23, "Teresa", "orange juice" };

    for (int j = 0; j < number; j++) {
        for (int i = 2; i <= sqrt(stud[j].age); i++) {
            if (stud[j].age % i == 0) {
                cout << stud[j].name << " " << stud[j].drink << endl;;
            }
        }
    }
}

#include <iostream>
#include <string> 
using namespace std;

struct Student
{
    int age;
    string name;
    string drink;
};

int main()
{
    const int number = 5;
    Student stud[number];
    stud[0] = { 19, "Kris", "Tea" };
    stud[1] = { 22, "Tess", "water" };
    stud[2] = { 21, "Ed", "coffee" };
    stud[3] = { 23, "Teresa", "orange juice" };

    int min = 15;

    for (int i = 0; i < number; i++) {
        if (stud[i].age > min) {
            min = stud[i].age;
        }
    }
    for (int i = 0; i < number; i++) {
        if (stud[i].age == min) {
            cout << stud[i].name << " " << stud[i].drink;
        }
    }

}


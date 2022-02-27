#include <iostream>
#include <string> 
using namespace std;

struct Student
{
    int age;
    string name;
    string drink;
}​​​​​;


void printInformation(Student student)
{
    cout << "Age: " << student.age << "\n";
    cout << "Name: " << student.name << "\n";
    cout << "Drink: " << student.drink << "\n";
    cout << endl;
}
int main()
{
    Student A = { 19, "Kris", "Tea" };
    Student B = { 22, "Tess", "water" };
    Student C = { 21, "Ed", "coffee" };
    
    printInformation(A);
    printInformation(B);
    printInformation(C);
}

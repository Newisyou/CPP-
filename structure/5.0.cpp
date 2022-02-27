#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Student
{
    string name;
    string play;
    int win;
}​​​​​;

void game(Student& gamer1, Student& gamer2) {
    if (gamer1.play == gamer2.play) {
        gamer1.win += 0;
    }
    if (gamer1.play == "Rock") {
        if (gamer2.play == "Scissors") gamer1.win += 1;
        if (gamer2.play == "paper") gamer2.win += 1;
    }
    if (gamer1.play == "Scissors") {
        if (gamer2.play == "paper") gamer1.win += 1;
        if (gamer2.play == "Rock") gamer2.win += 1;
    }
    if (gamer1.play == "paper") {
        if (gamer2.play == "Scissors") gamer2.win += 1;
        if (gamer2.play == "Rock") gamer1.win += 1;
    }

}


int main()
{
    const int number = 4;
    Student stud[number] = {};
    stud[0] = { "Ray", "Rock", 0 };
    stud[1] = { "Kris", "paper", 0 };
    stud[2] = { "Norman", "Scissors", 0 };
    stud[3] = { "Lisa", "Rock", 0 };
  
    for (int i = 0; i < number; ++i) {
        for (int j = i + 1; j < number; ++j) {
            game(stud[i], stud[j]);
        }
    }

    int max = 0;
    string winner="0";
    for (int i = 0; i < number; ++i) {
        if (stud[i].win > max) {
            max = stud[i].win;
            winner = stud[i].name;
        }
    }

    cout << winner << endl;
}
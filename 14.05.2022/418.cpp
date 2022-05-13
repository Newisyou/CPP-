#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct text {
    vector <string> str;
    int ip = 0;
    void add_string() {
        str.push_back("");
    }
    void up() {
        if (ip > 0) {
            ip--;
        }
    }
    void down() {
        if (ip < 99) {
            ip++;
        }
    }
    void push(char x) {
        str[this->ip] = str[ip] + x;
    }
    void erase() {
        if (str[this->ip].length() == 0) {
            str[ip - 1] = str[ip - 1].substr(0, str[ip - 1].length() - 1);
        }
        else {
            str[ip] = str[ip].substr(0, str[ip].length() - 1);
        }
    }
    void enter() {
        ip++;
        str.push_back("");
    }
};
int main()
{
    text a;
    a.add_string();
    string input;
    getline(cin, input);
    int max = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '<') {
            a.erase();
        }
        if (input[i] == '^') {
            a.up();

        if ((input[i] != '<') && (input[i] != '/') && (input[i] != '^') && (input[i] != '|')) {
            a.push(input[i]);
        }
        if (input[i] == '/') {
            a.enter();
        }
        }
        if (input[i] == '|') {
            a.down();
        }
        for (auto now : a.str) {
            if (now.length() > max) {
                max = now.length();
            }
        }
    }
    for (auto now : a.str) {
        cout << now << endl;
    }
    cout << max;

}
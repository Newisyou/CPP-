#include <iostream>
#include <stack>
#include <cstring>
#include <cmath>

using namespace std;

int priority(char c) {
    int p;
    switch (c)
    {
        case '+':
        case '-':
            p = 0;
            break;
        case '*':
        case '/':
            p = 1;
            break;
        case '^':
            p = 2;
            break;
    }
    return p;
}


double Operations(char oper, double num1, double num2) {
    double result;
    switch (oper) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '^':
            result = pow(num1, num2);
            break;
    }
    return result;
}



int main() {
    string input;
    cin >> input;
    stack<char> simbols;
    stack<double> number;
    string output = "";
    int c = input.length();
    
    for(int i=0; i<c; i++){
        while (isdigit(input[i])){
             int t = (int)input[i]-48;
            while (isdigit(input[++i]))
            t = t * 10 + (int)input[i]-48;
            number.push(t);
        }
    
    }
    
    
    for(int i = 0; i < c; i++) {
        if (isdigit(input[i]))
            output+=input[i];
        else if ((input[i] == '(') or (input[i] == ')'))
        {
            if (input[i] == '(')
                simbols.push(input[i]);
            else
            {
                while (simbols.top() != '(')
                {
                    output+=simbols.top();
                    simbols.pop();
                }
                simbols.pop();
            }

        }
        else {
            while ((!simbols.empty()) and
            ((priority(input[i]) <= priority(simbols.top()))
            or (input[i] == '^' && priority(input[i]) < priority(simbols.top()))))
            {
                output+=simbols.top();
                simbols.pop();
            }
            simbols.push(input[i]);
        }
    }

    while((!number.empty()) and(!simbols.empty())){
        double num1 = number.top();
        number.pop();
        double num2 = number.top();
        number.pop();
        char element=simbols.top();
        number.push(Operations(element,num2,num1));
        output+=simbols.top();
        simbols.pop();
    }
            
    cout << output << endl;
    cout << number.top() << endl;
}
